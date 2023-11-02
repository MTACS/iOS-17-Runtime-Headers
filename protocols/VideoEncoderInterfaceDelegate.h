
@protocol VideoEncoderInterfaceDelegate <NSObject>

@required

- (unsigned int)encoder:(VideoEncoderInterface *)arg1 codecTypeOverrideForstreamId:(NSString *)arg2;
- (bool)encoder:(VideoEncoderInterface *)arg1 configureSessionOverride:(struct OpaqueVTCompressionSession { }*)arg2 streamId:(NSString *)arg3;
- (void)encoder:(VideoEncoderInterface *)arg1 encodedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 metadata:(AVTimedMetadataGroup *)arg3 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 streamId:(NSString *)arg5;
- (void)encoder:(VideoEncoderInterface *)arg1 encodingFailedForStream:(NSString *)arg2;
- (NSDictionary *)encoder:(VideoEncoderInterface *)arg1 overrideVideoEncoderSpecificationForstreamId:(NSString *)arg2;

@end
