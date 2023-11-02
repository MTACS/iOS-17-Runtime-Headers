
@interface COCompanionLinkClientFactory : NSObject <COCompanionLinkClientFactoryProtocol> {
    NSMutableDictionary * _activeDevices;
    NSMapTable * _clients;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSHashTable * _locals;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSMapTable *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *locals;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientsForRapportClient_unsafe:(id)arg1;
- (bool)_isKnownDevice:(id)arg1;
- (id)_reuseableRapportClientInClientsList:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (void)activateCompanionLinkClient:(id)arg1;
- (id)activeDevices;
- (id)clients;
- (Class)companionLinkClientClass;
- (id)companionLinkClientForCurrentDevice;
- (id)companionLinkClientForDevice:(id)arg1 withIDSIdentifier:(id)arg2;
- (void)didActivate:(id)arg1 error:(id)arg2;
- (void)didChangeDevice:(id)arg1 flags:(unsigned int)arg2;
- (void)didChangeErrorFlags:(id)arg1;
- (void)didDisconnect:(id)arg1;
- (void)didFindDevice:(id)arg1;
- (void)didInterrupt:(id)arg1;
- (void)didInvalidate:(id)arg1;
- (void)didLoseDevice:(id)arg1;
- (void)didRegisterEventID:(id)arg1 client:(id)arg2;
- (void)didRegisterRequestID:(id)arg1 client:(id)arg2;
- (void)didUpdateLocalDevice:(id)arg1;
- (void)didUpdateState:(id)arg1;
- (id)dispatchQueue;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (void)invalidateCompanionLinkClient:(id)arg1;
- (id)locals;
- (void)removeClient:(id)arg1;
- (void)setLocals:(id)arg1;

@end
