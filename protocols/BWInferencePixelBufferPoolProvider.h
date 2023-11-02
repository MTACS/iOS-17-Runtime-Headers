
@protocol BWInferencePixelBufferPoolProvider <NSObject>

@required

- (BWPixelBufferPool *)preparedOutputPixelBufferPoolForAttachedMediaKey:(NSString *)arg1 format:(BWVideoFormat *)arg2;

@end
