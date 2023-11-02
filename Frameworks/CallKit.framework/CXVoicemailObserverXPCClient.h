
@interface CXVoicemailObserverXPCClient : NSObject <CXVoicemailObserverDataSource> {
    NSXPCConnection * _connection;
    NSHashTable * _delegates;
    NSMutableDictionary * _mutableVoicemailUUIDToVoicemailMap;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *mutableVoicemailUUIDToVoicemailMap;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *voicemailUUIDToVoicemailMap;

+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClient;
+ (id)sharedXPCClientSemaphore;

- (void).cxx_destruct;
- (void)_addOrUpdateVoicemails:(id)arg1;
- (id)_init;
- (void)_invalidate;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1 isSynchronous:(bool)arg2;
- (void)_removeVoicemails:(id)arg1;
- (void)_requestVoicemails;
- (void)addDelegate:(id)arg1;
- (oneway void)addOrUpdateVoicemails:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegates;
- (id)init;
- (void)invalidate;
- (id)mutableVoicemailUUIDToVoicemailMap;
- (int)notifyToken;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (oneway void)removeVoicemails:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (id)voicemailUUIDToVoicemailMap;

@end
