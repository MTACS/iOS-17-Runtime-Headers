
@interface IDSDaemonControllerForwarder : NSProxy {
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    int  _priority;
    NSProtocolChecker * _protocol;
    NSObject<OS_dispatch_queue> * _remoteMessageQueue;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ivarQueue;
@property (nonatomic) int priority;
@property (nonatomic, readonly) NSProtocolChecker *protocol;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *remoteMessageQueue;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)ivarQueue;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)priority;
- (id)protocol;
- (id)remoteMessageQueue;
- (void)setPriority:(int)arg1;

@end
