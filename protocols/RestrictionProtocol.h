
@protocol RestrictionProtocol

@required

- (int)encodeBuffer:(NSData *)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)restrictId;
- (void)setRestrictId:(int)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
