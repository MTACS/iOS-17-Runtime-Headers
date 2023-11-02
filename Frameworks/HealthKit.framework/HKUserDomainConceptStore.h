
@interface HKUserDomainConceptStore : NSObject <HKUserDomainConceptStoreClientInterface, _HKXPCExportable> {
    <HKUserDomainConceptStoreDelegate> * _delegate;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property <HKUserDomainConceptStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_clientQueue_notifyForChangesToUserDomainConcepts:(id)arg1 changeType:(long long)arg2;
- (void)_createAndStoreUserDomainConceptBackedByOntologyConceptWithIdentifier:(id)arg1 supplementaryProperties:(id)arg2 userDomainConceptTypeIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleAutomaticProxyReconnection;
- (void)_observeUserDomainConceptChanges:(bool)arg1 completion:(id /* block */)arg2;
- (void)_storeUserDomainConcepts:(id)arg1 method:(long long)arg2 completion:(id /* block */)arg3;
- (bool)_synchronouslyObserveUserDomainConceptChanges:(id*)arg1;
- (void)client_notifyForChangesToUserDomainConcepts:(id)arg1 changeType:(long long)arg2;
- (void)connectionInvalidated;
- (id)delegate;
- (void)deleteUserDomainConcept:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteUserDomainConcepts:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)insertNewUserDomainConceptBackedByOntologyConceptWithIdentifier:(id)arg1 supplementaryProperties:(id)arg2 userDomainConceptTypeIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)remoteInterface;
- (void)saveOrUpdateUserDomainConcept:(id)arg1 completion:(id /* block */)arg2;
- (void)saveOrUpdateUserDomainConcepts:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 completion:(id /* block */)arg2;

@end
