
@protocol HMDResidentDeviceManager <NSObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver>

@required

- (void)addDataSource:(id <HMDDevicePreferenceDataSource>)arg1;
- (void)atHomeLevelChanged:(long long)arg1;
- (NSArray *)availableResidentDevices;
- (void)configureWithHome:(HMDHome *)arg1 messageDispatcher:(HMDMessageDispatcher *)arg2;
- (void)confirmAsResident;
- (void)confirmOnAvailability;
- (void)confirmWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (HMDDevice *)confirmedPrimaryResidentDevice;
- (<HMDResidentDeviceManagerDelegate> *)delegate;
- (NSDictionary *)dumpState;
- (void)electResidentDevice:(unsigned long long)arg1;
- (bool)hasTrustZoneCapableResident;
- (void)invalidate;
- (bool)isCurrentDeviceAvailableResident;
- (bool)isCurrentDeviceConfirmedPrimaryResident;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isResidentAvailable;
- (bool)isResidentElectionV2Enabled;
- (bool)isResidentSupported;
- (void)notifyClientsOfUpdatedResidentDevice:(HMDResidentDevice *)arg1;
- (HMDResidentDevice *)primaryResidentDevice;
- (NSUUID *)primaryResidentUUID;
- (void)removeResidentDevice:(HMDResidentDevice *)arg1;
- (NSArray *)residentDevices;
- (void)run;
- (void)setDelegate:(id <HMDResidentDeviceManagerDelegate>)arg1;
- (void)setResidentSupported:(bool)arg1;
- (void)updatePrimaryResidentWithUUID:(NSUUID *)arg1 actions:(HMDBackingStoreTransactionActions *)arg2;
- (void)updateResidentAvailability;
- (bool)wasTheHomeFetchedFromCloud;

@end
