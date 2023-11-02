
@protocol ENTProtocol <NSObject>

@required

- (NSData *)readBinary;
- (bool)readBool;
- (unsigned char)readByte;
- (double)readDouble;
- (void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3;
- (void)readFieldEnd;
- (short)readI16;
- (int)readI32;
- (long long)readI64;
- (void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2;
- (void)readListEnd;
- (void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3;
- (void)readMapEnd;
- (void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3;
- (void)readMessageEnd;
- (void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2;
- (void)readSetEnd;
- (NSString *)readString;
- (void)readStructBeginReturningName:(id*)arg1;
- (void)readStructEnd;
- (<ENTTransport> *)transport;
- (void)writeBinary:(NSData *)arg1;
- (void)writeBool:(bool)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeDouble:(double)arg1;
- (void)writeFieldBeginWithName:(NSString *)arg1 type:(int)arg2 fieldID:(int)arg3;
- (void)writeFieldEnd;
- (void)writeFieldStop;
- (void)writeI16:(short)arg1;
- (void)writeI32:(int)arg1;
- (void)writeI64:(long long)arg1;
- (void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeListEnd;
- (void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
- (void)writeMapEnd;
- (void)writeMessageBeginWithName:(NSString *)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (void)writeMessageEnd;
- (void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeSetEnd;
- (void)writeString:(NSString *)arg1;
- (void)writeStructBeginWithName:(NSString *)arg1;
- (void)writeStructEnd;

@end
