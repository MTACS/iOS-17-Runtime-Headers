
@protocol HMDResidentDeviceManagerContext <NSObject>

@required

- (long long)atHomeLevel;
- (NSArray *)availableResidentDevices;
- (HMFFuture *)cloudReady;
- (HMDResidentDevice *)currentResidentDevice;
- (HMDHome *)home;
- (bool)isCurrentDeviceAvailableResident;
- (bool)isOwnerUser;
- (bool)isResidentEnabled;
- (bool)isResidentSupported;
- (HMDMessageDispatcher *)messageDispatcher;
- (HMDResidentDevice *)primaryResidentDevice;
- (NSObject<OS_dispatch_queue> *)queue;
- (HMDResidentDevice *)residentDeviceForDevice:(HMDDevice *)arg1;

@end
