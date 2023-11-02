
@interface _DPBigEndianDataEncoder : NSObject {
    NSMutableData * _buffer;
}

@property (nonatomic, retain) NSMutableData *buffer;

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (id)buffer;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)setBuffer:(id)arg1;
- (void)writeFloat32:(float)arg1;
- (void)writeFloat64:(double)arg1;
- (void)writeInt16:(short)arg1;
- (void)writeInt32:(int)arg1;
- (void)writeInt64:(long long)arg1;
- (void)writeUChar:(unsigned char)arg1;
- (void)writeUInt16:(unsigned short)arg1;
- (bool)writeUInt24:(unsigned int)arg1;
- (void)writeUInt32:(unsigned int)arg1;
- (void)writeUInt64:(unsigned long long)arg1;

@end
