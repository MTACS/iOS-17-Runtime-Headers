
@interface ADEspressoRunner : NSObject <ADEspressoRunnerProtocol> {
    NSObject<ADEspressoRunnerProtocol> * _espressoRunner;
}

- (void).cxx_destruct;
- (struct __CVBuffer { }*)createAndRegisterPixelBufferForDescriptor:(id)arg1;
- (long long)execute;
- (id)initWithPath:(id)arg1 forEngine:(unsigned long long)arg2 configurationName:(id)arg3;
- (id)networkVersionString;
- (id)registerDescriptor:(id)arg1;
- (long long)registerIOSurface:(struct __IOSurface { }*)arg1 forDescriptor:(id)arg2;
- (long long)registerPixelBuffer:(struct __CVBuffer { }*)arg1 forDescriptor:(id)arg2;
- (long long)updateFeedbackLoopInputBuffer:(struct __CVBuffer {}**)arg1 inputDescriptor:(id)arg2 outputBuffer:(struct __CVBuffer {}**)arg3 outputDescriptor:(id)arg4;

@end
