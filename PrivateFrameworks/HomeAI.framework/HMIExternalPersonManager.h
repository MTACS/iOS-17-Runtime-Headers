
@interface HMIExternalPersonManager : HMIPersonManager <HMFLogging, HMFTimerDelegate> {
    <HMIExternalPersonManagerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSOperationQueue * _operationQueue;
    HMIExternalPersonManagerSettings * _settings;
    HMFTimer * _watchdogTimer;
}

@property (nonatomic) <HMIExternalPersonManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) HMIExternalPersonManagerSettings *settings;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *watchdogTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateSettings:(id)arg1;
- (id)dataSource;
- (void)handleRemovedFaceCropWithUUID:(id)arg1;
- (void)handleRemovedFaceprintWithUUID:(id)arg1;
- (void)handleRemovedPersonWithUUID:(id)arg1;
- (void)handleUpdatedFaceprint:(id)arg1;
- (void)handleUpdatedPerson:(id)arg1;
- (void)handleUpdatedPersonFaceCrop:(id)arg1;
- (void)handleUpdatedSettings:(id)arg1;
- (id)initWithUUID:(id)arg1 homeUUID:(id)arg2;
- (id)logIdentifier;
- (id)operationQueue;
- (void)setDataSource:(id)arg1;
- (id)settings;
- (void)timerDidFire:(id)arg1;
- (id)watchdogTimer;

@end
