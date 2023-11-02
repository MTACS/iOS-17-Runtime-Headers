
@interface PostProcessorFactory : NSObject

+ (id)defaultFactory;

- (id)postProcessorFromReader:(id)arg1 originalPixelFormat:(unsigned int)arg2 encodedFormat:(unsigned int)arg3 encoderType:(id)arg4 streamId:(id)arg5;

@end
