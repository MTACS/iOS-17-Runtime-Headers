
@protocol HMDAccessCodeManagerContext <NSObject>

@optional

- (NSUUID *)UUID;
- (NSArray *)UUIDsOfAccessoriesSupportingAccessCodes;
- (NSArray *)UUIDsOfHAPAccessoriesSupportingAccessCodes;
- (NSArray *)UUIDsOfMatterAccessoriesSupportingAccessCodes;
- (NSArray *)UUIDsOfUsersWithoutAccessCodes;
- (NSArray *)accessoriesSupportingAccessCodes;
- (long long)accessoryReadWriteRetries;
- (double)accessoryReadWriteRetryTimeInterval;
- (HMDHomeAdministratorHandler *)administratorHandler;
- (HMDBulletinBoard *)bulletinBoard;
- (void)configureWithMessageDispatcher:(HMFMessageDispatcher *)arg1;
- (double)dataCleanUpCheckTimerInterval;
- (HMAccessCodeValue *)generateAccessCodeValueFromConstraints:(NSArray *)arg1 accessoryAccessCodes:(NSArray *)arg2 homeAccessCodes:(NSArray *)arg3;
- (HMDHAPAccessory *)hapAccessoryWithUUID:(NSUUID *)arg1;
- (bool)hasHomeOnboardedForAccessCodes;
- (HMDHome *)home;
- (bool)isCurrentDeviceOwnerController;
- (bool)isCurrentDeviceOwnerUser;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isCurrentDeviceResidentCapable;
- (bool)isCurrentDeviceWatch;
- (bool)isDemoDataMockerEnabled;
- (bool)isFeatureEnabled;
- (bool)isHomeAppForegrounded;
- (bool)isResidentSupported;
- (HMFMessageDispatcher *)messageDispatcher;
- (NSNotificationCenter *)notificationCenter;
- (NAFuture *)performReadRequests:(NSArray *)arg1 withRetries:(long long)arg2 timeInterval:(double)arg3 loggingObject:(id)arg4;
- (NAFuture *)performWriteRequests:(NSArray *)arg1 withRetries:(long long)arg2 timeInterval:(double)arg3 loggingObject:(id)arg4;
- (bool)primaryResidentSupportsAccessCodes;
- (void)redispatchToResidentMessage:(HMFMessage *)arg1;
- (HMDRemoteMessageForwarder *)remoteMessageForwarder;
- (double)removedUserAccessCodeTimeToLive;
- (HMDDevice *)residentCommunicationHandlerPreferredDevice;
- (long long)residentDataSyncVerificationRetries;
- (double)residentDataSyncVerificationRetryTimeInterval;
- (HMDUser *)userForMessage:(HMFMessage *)arg1;
- (HMDUser *)userWithUUID:(NSUUID *)arg1;
- (HMDHomeWalletKeyManager *)walletKeyManager;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end
