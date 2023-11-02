
@interface IDSXPCConnectionRemoteObjectPromise : NSObject {
    NSXPCInterface * _interface;
    NSMutableArray * _pendingInvocations;
    NSObject<OS_dispatch_queue> * _queue;
    id  _target;
}

@property (nonatomic, retain) NSXPCInterface *interface;
@property (nonatomic, retain) NSMutableArray *pendingInvocations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (void)_assertVoidReturnValueInInvocation:(id)arg1;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)fulfillWithRemoteObject:(id)arg1;
- (id)initWithInterface:(id)arg1 queue:(id)arg2;
- (id)interface;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)pendingInvocations;
- (id)queue;
- (id)remoteObjectProxy;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInterface:(id)arg1;
- (void)setPendingInvocations:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
