
@interface ENTBinaryProtocol : NSObject <ENTProtocol> {
    int  _messageSizeLimit;
    bool  _strictRead;
    bool  _strictWrite;
    <ENTTransport> * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int messageSizeLimit;
@property (nonatomic) bool strictRead;
@property (nonatomic) bool strictWrite;
@property (readonly) Class superclass;
@property (nonatomic, retain) <ENTTransport> *transport;

- (void).cxx_destruct;
- (id)initWithTransport:(id)arg1;
- (id)initWithTransport:(id)arg1 strictRead:(bool)arg2 strictWrite:(bool)arg3;
- (int)messageSizeLimit;
- (id)readBinary;
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
- (id)readString;
- (id)readStringBody:(int)arg1;
- (void)readStructBeginReturningName:(id*)arg1;
- (void)readStructEnd;
- (void)setMessageSizeLimit:(int)arg1;
- (void)setStrictRead:(bool)arg1;
- (void)setStrictWrite:(bool)arg1;
- (void)setTransport:(id)arg1;
- (bool)strictRead;
- (bool)strictWrite;
- (id)transport;
- (void)writeBinary:(id)arg1;
- (void)writeBool:(bool)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeDouble:(double)arg1;
- (void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3;
- (void)writeFieldEnd;
- (void)writeFieldStop;
- (void)writeI16:(short)arg1;
- (void)writeI32:(int)arg1;
- (void)writeI64:(long long)arg1;
- (void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeListEnd;
- (void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
- (void)writeMapEnd;
- (void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (void)writeMessageEnd;
- (void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeSetEnd;
- (void)writeString:(id)arg1;
- (void)writeStructBeginWithName:(id)arg1;
- (void)writeStructEnd;

@end
