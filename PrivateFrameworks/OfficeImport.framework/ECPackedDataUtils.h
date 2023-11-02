
@interface ECPackedDataUtils : NSObject

+ (id)dumpDataToHexadecimalString:(char *)arg1 start:(unsigned int)arg2 stop:(unsigned int)arg3 nicelyFormatted:(bool)arg4;
+ (char *)prepareForDataOfLength:(unsigned int)arg1 atIndex:(unsigned int)arg2 withPreviousLength:(unsigned int)arg3 inPackedData:(struct __CFData { }*)arg4 packedDataSize:(unsigned int)arg5;
+ (id)readStringFromData:(char *)arg1 atOffset:(unsigned int)arg2 withLength:(unsigned int)arg3;
+ (bool)setData:(char *)arg1 ofLength:(unsigned int)arg2 atIndex:(unsigned int)arg3 withPreviousLength:(unsigned int)arg4 inPackedData:(struct __CFData { }*)arg5 packedDataSize:(unsigned int)arg6;
+ (void)writeString:(id)arg1 toPackedData:(struct __CFData { }*)arg2 packedDataSize:(unsigned int)arg3 atIndex:(unsigned int)arg4 withPreviousLength:(unsigned short)arg5 outLength:(unsigned short*)arg6;

@end
