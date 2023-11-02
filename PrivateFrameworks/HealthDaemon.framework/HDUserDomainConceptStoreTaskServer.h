
@interface HDUserDomainConceptStoreTaskServer : HDStandardTaskServer <HDUserDomainConceptObserver, HKUserDomainConceptStoreServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _shouldObserveChanges;
    HDUserDomainConceptManager * _userDomainConceptManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_createAndStoreUserDomainConceptWithConceptIdentifier:(id)arg1 additionalProperties:(id)arg2 userDomainConceptTypeIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_observeUserDomainConceptChanges:(bool)arg1 completion:(id /* block */)arg2;
- (void)remote_storeUserDomainConcepts:(id)arg1 method:(long long)arg2 completion:(id /* block */)arg3;
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;

@end
