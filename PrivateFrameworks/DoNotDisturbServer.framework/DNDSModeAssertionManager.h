
@interface DNDSModeAssertionManager : NSObject <DNDSBackingStoreDelegate, DNDSModeAssertionQuerying, DNDSModeAssertionUpdating, DNDSSysdiagnoseDataProvider> {
    <DNDSBackingStore> * _backingStore;
    DNDSClientDetailsProvider * _clientDetailsProvider;
    NSObject<OS_os_transaction> * _nonPersistentAssertionTransaction;
    DNDSModeAssertionStore * _store;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _storeLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)_loadDataFromBackingStore;
- (void)_resolveTransactionForModeAssertionStore;
- (bool)_saveDataToBackingStoreWithError:(id*)arg1;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (id)clientDetailsForClientIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithBackingStore:(id)arg1 clientDetailsProvider:(id)arg2;
- (id)initWithBackingStoreURL:(id)arg1 clientDetailsProvider:(id)arg2;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)arg1;
- (id)modeAssertionsMatchingPredicate:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;
- (id)updateModeAssertionsWithContextHandler:(id /* block */)arg1 error:(id*)arg2;

@end
