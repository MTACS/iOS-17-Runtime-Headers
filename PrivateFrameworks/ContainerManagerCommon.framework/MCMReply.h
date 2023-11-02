
@interface MCMReply : NSObject <MCMReply, MCMReply_Internal> {
    bool  _exitAfterSend;
    NSObject<OS_dispatch_queue> * _fastWorkloop;
    bool  _replySent;
    <MCMResultPromise> * _resultPromise;
    NSObject<OS_dispatch_queue> * _slowWorkloop;
    NSObject<OS_xpc_object> * _xpcReply;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool exitAfterSend;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *fastWorkloop;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MCMResultPromise> *resultPromise;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *slowWorkloop;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcReply;

- (void).cxx_destruct;
- (void)_send;
- (void)dispatchSyncToFastWorkloopWithBlock:(id /* block */)arg1;
- (void)encodeResult:(id)arg1;
- (bool)exitAfterSend;
- (id)fastWorkloop;
- (void)handoffToSlowWorkloopforClientIdentity:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithXpcReply:(id)arg1 slowWorkloop:(id)arg2 fastWorkloop:(id)arg3 resultPromise:(id)arg4;
- (void)invalidate;
- (id)resultPromise;
- (void)send;
- (void)setExitAfterSend:(bool)arg1;
- (id)slowWorkloop;
- (id)xpcReply;

@end
