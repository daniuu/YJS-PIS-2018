//---------------------------------------------------------------------------

#ifndef ofcrc32H
#define ofcrc32H
//---------------------------------------------------------------------------


#ifndef OFCRC32_H
#define OFCRC32_H


/** general-purpose 32-bit CRC algorithm.
 */
class OFCRC32
{
public:

  /// constructor
  OFCRC32()
  : value(0)
  {
  }

  /// destructor
  ~OFCRC32()
  {
  }

  /// reset object to initial state (zero CRC)
  void reset()
  {
    value=0;
  }

  /** add block of raw data to CRC
   *  @param ptr pointer to raw data
   *  @param size length of raw data block in bytes
   */
  void addBlock(const void *ptr, unsigned long size);

  /// returns the current CRC as unsigned int
  unsigned int getCRC32() const
  {
    return value;
  }

  /** compute CRC for given block of data using a temporary CRC object
   *  @param ptr pointer to raw data
   *  @param size length of raw data block in bytes
   *  @return CRC32 as unsigned int
   */
  static unsigned int compute(const void *ptr, unsigned long size);

private:
  /// CRC look-up table
  static const unsigned int crctab[256];

  /// current CRC
  unsigned int value;
};

#endif









#endif
