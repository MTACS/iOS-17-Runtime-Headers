
@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>

@optional

- (void)homeManager:(HMHomeManager *)arg1 didRemoveHomePermanently:(NSUUID *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAccessAllowedWhenLocked:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateDevices:(NSSet *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHH2MigrationAvailableState:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHH2MigrationInProgressState:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHH2State:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHomeSafetySecurityEnabled:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateMultiUserStatus:(long long)arg2 reason:(NSString *)arg3;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateResidentEnabledForThisDevice:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStateForIncomingInvitations:(NSArray *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateThisDeviceIsResidentCapable:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManagerDidEndBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManagerDidRemoveCurrentAccessory:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateApplicationData:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateAssistantIdentifiers:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateCurrentHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncInProgress:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncState:(HMHomeManager *)arg1;
- (void)homeManagerWillStartBatchNotifications:(HMHomeManager *)arg1;

@end
