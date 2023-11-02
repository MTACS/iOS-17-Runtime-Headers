
@protocol HMDPersonDataInterface <NSObject>

@required

- (void)configureWithDataSource:(id <HMDPersonDataSource>)arg1 home:(HMDHome *)arg2;

@optional

- (void)handleFaceMisclassificationForFaceCropData:(NSData *)arg1 personUUID:(NSUUID *)arg2;
- (void)handleRemovedFaceCropWithUUID:(NSUUID *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleRemovedFaceprintWithUUID:(NSUUID *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleRemovedPersonWithUUID:(NSUUID *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedFaceprint:(HMFaceprint *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(bool)arg1;
- (void)handleUpdatedIsDataSyncInProgress:(bool)arg1;
- (void)handleUpdatedPerson:(HMPerson *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedPersonFaceCrop:(HMPersonFaceCrop *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedSettings:(id <HMDPersonManagerSettings>)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (void)handleUpdatedUnassociatedFaceCrop:(HMFaceCrop *)arg1 mirrorOutputFuture:(NAFuture *)arg2;
- (HMIHomePersonManager *)homePersonManager;
- (HMIExternalPersonManager *)photosPersonManager;

@end
