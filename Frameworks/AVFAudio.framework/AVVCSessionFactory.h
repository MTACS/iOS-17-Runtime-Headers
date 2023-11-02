
@interface AVVCSessionFactory : NSObject {
    AVVCSessionManager * _primarySessionManager;
    NSMutableDictionary * _sessionManagerMap;
    id /* block */  _sessionWasCreatedBlock;
    id /* block */  _sessionWillBeDestroyedBlock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) AVVCSessionManager *primarySessionManager;
@property (nonatomic, retain) NSMutableDictionary *sessionManagerMap;
@property (nonatomic, copy) id /* block */ sessionWasCreatedBlock;
@property (nonatomic, copy) id /* block */ sessionWillBeDestroyedBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_wqCreateAuxSessionAndManagerForDeviceUID:(id)arg1 clientType:(long long)arg2 session:(id*)arg3 manager:(id*)arg4 error:(id*)arg5;
- (id)_wqCreatePrimarySessionManagerIfNeeded:(id)arg1 clientType:(long long)arg2 error:(id*)arg3;
- (void)_wqSessionAndManagerForContext:(id)arg1 clientType:(long long)arg2 session:(id*)arg3 manager:(id*)arg4 error:(id*)arg5;
- (id)auxSessionManagers;
- (void)cleanupContext:(id)arg1;
- (id)init;
- (id)primarySessionManager;
- (void)releasePrimarySessionManager;
- (void)sessionForContext:(id)arg1 clientType:(long long)arg2 completion:(id /* block */)arg3;
- (id)sessionForContext:(id)arg1 clientType:(long long)arg2 error:(id*)arg3;
- (void)sessionForContext:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionForContext:(id)arg1 error:(id*)arg2;
- (void)sessionManagerForContext:(id)arg1 clientType:(long long)arg2 completion:(id /* block */)arg3;
- (id)sessionManagerForContext:(id)arg1 clientType:(long long)arg2 error:(id*)arg3;
- (id)sessionManagerMap;
- (id /* block */)sessionWasCreatedBlock;
- (id /* block */)sessionWillBeDestroyedBlock;
- (void)setPrimarySessionManager:(id)arg1;
- (void)setSessionManagerMap:(id)arg1;
- (void)setSessionWasCreatedBlock:(id /* block */)arg1;
- (void)setSessionWillBeDestroyedBlock:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
