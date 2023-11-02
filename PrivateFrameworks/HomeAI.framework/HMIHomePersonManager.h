
@interface HMIHomePersonManager : HMIPersonManager <HMFLogging, HMFTimerDelegate> {
    HMFTimer * _analyticsTimer;
    <HMIHomePersonManagerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSOperationQueue * _operationQueue;
    HMIHomePersonManagerSettings * _settings;
    NSMutableDictionary * _unknownFacesSavedCounts;
    HMFTimer * _watchdogTimer;
}

@property (readonly) HMFTimer *analyticsTimer;
@property (nonatomic) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) HMIHomePersonManagerSettings *settings;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *unknownFacesSavedCounts;
@property (readonly) HMFTimer *watchdogTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateSettings:(id)arg1;
- (id)analyticsTimer;
- (id)dataSource;
- (void)handleMisclassifiedPersonForFaceCrop:(id)arg1;
- (void)handleNewFaceEvents:(id)arg1;
- (void)handleRemovedFaceCropWithUUID:(id)arg1;
- (void)handleRemovedFaceprintWithUUID:(id)arg1;
- (void)handleRemovedPersonWithUUID:(id)arg1;
- (void)handleUpdatedFaceprint:(id)arg1;
- (void)handleUpdatedPerson:(id)arg1;
- (void)handleUpdatedPersonFaceCrop:(id)arg1;
- (void)handleUpdatedSettings:(id)arg1;
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1;
- (id)initWithUUID:(id)arg1 homeUUID:(id)arg2;
- (id)logIdentifier;
- (id)operationQueue;
- (void)setDataSource:(id)arg1;
- (id)settings;
- (void)storeFaceprint:(id)arg1 completion:(id /* block */)arg2;
- (void)storeUnassociatedFaceCrop:(id)arg1 completion:(id /* block */)arg2;
- (void)timerDidFire:(id)arg1;
- (id)unknownFacesSavedCounts;
- (id)watchdogTimer;

@end
