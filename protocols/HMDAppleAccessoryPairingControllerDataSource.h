
@protocol HMDAppleAccessoryPairingControllerDataSource <NSObject>

@required

- (HMDBulletinBoard *)bulletinBoard;
- (void)deletePairingAccessoryState:(NSUUID *)arg1;
- (HMDDevice *)deviceForIdentifier:(NSUUID *)arg1;
- (HAPPairingIdentity *)hh1ControllerIdentity;
- (NSArray *)inProgressPairingAccessories;
- (NSNotificationCenter *)notificationCenter;
- (HMFTimer *)timerWithInterval:(double)arg1 options:(unsigned long long)arg2;
- (void)updatePairingAccessoryState:(HMDAppleAccessoryPairingHomeState *)arg1;

@end
