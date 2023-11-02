
@interface HKOntologyStore : NSObject <HKOntologyStoreClientInterface, _HKXPCExportable> {
    NSUUID * _identifier;
    HKObserverSet<HKOntologyStoreObserver> * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
    id /* block */  _unitTesting_didChangeObserverRegistration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_didChangeObserverRegistration;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_callUnitTestHookObserving:(bool)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversAboutReconnect;
- (void)_observeOntologyStoreChanges:(bool)arg1 completion:(id /* block */)arg2;
- (void)_registerFirstObserver;
- (bool)_synchronouslyRegisterToObserveOntologyStoreChanges:(id*)arg1;
- (void)_unregisterLastObserver;
- (void)client_didImportEntry:(id)arg1;
- (void)client_didStageEntry:(id)arg1;
- (void)connectionInvalidated;
- (void)downloadRequiredShardsWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (void)importRequiredShardsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)insertEntries:(id)arg1 completion:(id /* block */)arg2;
- (void)markShardsWithIdentifiers:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)ontologyServerURLWithCompletion:(id /* block */)arg1;
- (void)ontologyShardRegistryEntriesWithCompletion:(id /* block */)arg1;
- (void)pruneOntologyWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (id)remoteInterface;
- (void)requestGatedOntologyUpdateWithCompletion:(id /* block */)arg1;
- (void)setOntologyServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setUnitTesting_didChangeObserverRegistration:(id /* block */)arg1;
- (void)shardRequirementStatusesWithCompletion:(id /* block */)arg1;
- (void)unitTest_noOpWithCompletion:(id /* block */)arg1;
- (id /* block */)unitTesting_didChangeObserverRegistration;
- (void)unregisterObserver:(id)arg1;
- (void)updateOntologyForReason:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateShardRegistryWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

- (void)markCoreMedsShardAsRequiredWithCompletion:(id /* block */)arg1;
- (void)markInteractionsShardAsRequiredWithCompletion:(id /* block */)arg1;
- (void)markMedicationShardsAsRequiredOnFirstLaunchWithCompletion:(id /* block */)arg1;
- (void)markMedsEducationAsRequiredWithCompletion:(id /* block */)arg1;
- (void)markMedsScanningShardAsRequiredWithCompletion:(id /* block */)arg1;

@end
