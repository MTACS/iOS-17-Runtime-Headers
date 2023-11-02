
@interface SUResponderChainInvocationRecorder : ISInvocationRecorder {
    Protocol * _protocol;
}

- (id)_targetForSelector:(SEL)arg1 sender:(id)arg2;
- (id)adjustedTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (void)invokeInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
