
@interface COIDSServiceDirector : NSObject <IDSServiceDelegate, NSCopying> {
    NSMapTable * _activeTransports;
    <COIDSServiceDirectorOnDemandDiscoveryDelegate> * _discoveryDelegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _meshName;
    COIDSMessageFactory * _messageFactory;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _service;
}

@property (nonatomic, retain) NSMapTable *activeTransports;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <COIDSServiceDirectorOnDemandDiscoveryDelegate> *discoveryDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *meshName;
@property (nonatomic, readonly) COIDSMessageFactory *messageFactory;
@property (nonatomic, copy) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (id)activeTransports;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoveryDelegate;
- (id)initWithIDSService:(id)arg1 meshName:(id)arg2;
- (id)meshName;
- (id)messageFactory;
- (id)queue;
- (void)sendMessage:(id)arg1 toDestination:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendResponse:(id)arg1 responseIdentifier:(id)arg2 toDestination:(id)arg3;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setActiveTransports:(id)arg1;
- (void)setDiscoveryDelegate:(id)arg1;
- (void)setMeshName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)start;
- (id)tokenFromURI:(id)arg1;
- (id)transportWithDiscoveryRecord:(id)arg1 withExecutionContext:(id)arg2;

@end
