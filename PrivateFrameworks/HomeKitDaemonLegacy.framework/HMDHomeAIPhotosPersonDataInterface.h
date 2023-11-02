
@interface HMDHomeAIPhotosPersonDataInterface : HMDHomeAIPersonDataInterface <HMFLogging, HMIExternalPersonManagerDataSource> {
    HMIExternalPersonManager * _photosPersonManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;
- (id)initWithPhotosPersonManager:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (id)photosPersonManager;

@end
