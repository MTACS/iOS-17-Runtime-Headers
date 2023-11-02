
@interface ISInvocationRecorder : NSObject {
    id  _target;
}

- (id)adjustedTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)invokeInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
