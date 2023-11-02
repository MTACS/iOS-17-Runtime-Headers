
@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreInterface, _HKXPCExportable> {
    HKObserverSet * _chrSupportedStateChangeObservers;
    HKHealthStore * _healthStore;
    HKObserverSet * _ingestionStateChangeObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    long long  _lastKnownIngestionState;
    HKTaskServerProxyProvider * _proxyProvider;
    id /* block */  _unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
}

@property (nonatomic, retain) HKObserverSet *chrSupportedStateChangeObservers;
@property (nonatomic, readonly) long long currentIngestionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HRBrandImageManager *hk_brandImageManager;
@property (nonatomic, retain) HKObserverSet *ingestionStateChangeObservers;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionWithObjectOnClientQueue:(id /* block */)arg1;
- (void)_establishProxyConnection;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void)_executeCheapCallOnPluginServerProxy:(id)arg1;
- (void)_fetchHealthRecordsPluginServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_getSynchronousHealthRecordsPluginServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_hk_shouldPromptForOptInClinicalDataCollection:(id /* block */)arg1;
- (void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)arg1;
- (void)addHealthRecordsSupportedChangeListener:(id)arg1;
- (void)addIngestionStateListener:(id)arg1;
- (id)chrSupportedStateChangeObservers;
- (void)clientRemote_healthRecordsSupportedDidChangeTo:(bool)arg1;
- (void)clientRemote_updateIngestionState:(long long)arg1;
- (void)connectionInvalidated;
- (long long)currentIngestionState;
- (void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)exportedInterface;
- (void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id /* block */)arg1;
- (void)fetchExportedPropertiesForHealthRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFHIRJSONDocumentWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRawSourceStringForHealthRecord:(id)arg1 completion:(id /* block */)arg2;
- (id)healthStore;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)ingestHealthRecordsWithOptions:(unsigned long long)arg1 reason:(id)arg2 accountIdentifiers:(id)arg3 completion:(id /* block */)arg4;
- (id)ingestionStateChangeObservers;
- (id)initWithHealthStore:(id)arg1;
- (void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)removeHealthRecordsSupportedChangeListener:(id)arg1;
- (void)removeIngestionStateListener:(id)arg1;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)arg1;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)arg1;
- (void)resetHealthRecordsLastExtractedRowIDWithCompletion:(id /* block */)arg1;
- (void)setChrSupportedStateChangeObservers:(id)arg1;
- (void)setIngestionStateChangeObservers:(id)arg1;
- (void)setUnitTesting_didCallReestablishProxyConnectionIfObserversArePresent:(id /* block */)arg1;
- (void)stringifyExtractionFailureReasonsForRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(id /* block */)arg2;
- (void)triggerHealthCloudUploadWithCompletion:(id /* block */)arg1;
- (id /* block */)unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)hk_brandImageManager;

@end
