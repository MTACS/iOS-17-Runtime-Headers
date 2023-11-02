
@protocol MTLResourceStateCommandEncoderSPI <MTLCommandEncoderSPI, MTLResourceStateCommandEncoder>

@optional

- (void)copyMappingStateFromTexture:(id <MTLTexture>)arg1 mipLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 toBuffer:(id <MTLBuffer>)arg4 offset:(unsigned long long)arg5 numTiles:(unsigned long long)arg6;

@end
