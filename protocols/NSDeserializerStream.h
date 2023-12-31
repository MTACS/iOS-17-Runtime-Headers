
@protocol NSDeserializerStream

@required

- (id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (unsigned long long)readAlignedDataSize;
- (void)readData:(void*)arg1 length:(unsigned long long)arg2;
- (int)readInt;

@end
