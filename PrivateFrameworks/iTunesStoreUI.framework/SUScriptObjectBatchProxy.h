
@interface SUScriptObjectBatchProxy : NSObject {
    SUScriptObjectInvocationBatch * _invocationBatch;
    id  _target;
}

@property SUScriptObjectInvocationBatch *invocationBatch;
@property id target;

- (void)forwardInvocation:(id)arg1;
- (id)invocationBatch;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setInvocationBatch:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
