
@protocol ADEspressoRunnerProtocol

@required

- (struct __CVBuffer { }*)createAndRegisterPixelBufferForDescriptor:(ADEspressoImageDescriptor *)arg1;
- (long long)execute;
- (id)initWithPath:(NSString *)arg1 forEngine:(unsigned long long)arg2 configurationName:(NSString *)arg3;
- (NSString *)networkVersionString;
- (ADEspressoBufferHandle *)registerDescriptor:(ADEspressoImageDescriptor *)arg1;
- (long long)registerIOSurface:(struct __IOSurface { }*)arg1 forDescriptor:(ADEspressoImageDescriptor *)arg2;
- (long long)registerPixelBuffer:(struct __CVBuffer { }*)arg1 forDescriptor:(ADEspressoImageDescriptor *)arg2;
- (long long)updateFeedbackLoopInputBuffer:(struct __CVBuffer {}**)arg1 inputDescriptor:(ADEspressoImageDescriptor *)arg2 outputBuffer:(struct __CVBuffer {}**)arg3 outputDescriptor:(ADEspressoImageDescriptor *)arg4;

@end
