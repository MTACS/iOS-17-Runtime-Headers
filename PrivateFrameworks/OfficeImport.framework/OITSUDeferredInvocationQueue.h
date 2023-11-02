
@interface OITSUDeferredInvocationQueue : NSObject {
    NSMutableArray * _invocations;
    id  _target;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performInvocations;
- (id)prepareWithInvocationTarget:(id)arg1;

@end
