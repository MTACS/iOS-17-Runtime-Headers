
@interface ISMainThreadInvocationRecorder : ISInvocationRecorder {
    bool  _waitUntilDone;
}

@property (nonatomic) bool waitUntilDone;

- (void)invokeInvocation:(id)arg1;
- (void)setWaitUntilDone:(bool)arg1;
- (bool)waitUntilDone;

@end
