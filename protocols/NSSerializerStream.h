
@protocol NSSerializerStream

@required

- (void)copySerializationInto:(void*)arg1;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (unsigned long long)writeInt:(unsigned long long)arg1;
- (unsigned long long)writeRoomForInt:(int*)arg1;

@end
