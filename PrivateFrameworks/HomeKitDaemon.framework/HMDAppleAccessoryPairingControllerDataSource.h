
@interface HMDAppleAccessoryPairingControllerDataSource : HMCContextProvider <HMDAppleAccessoryPairingControllerDataSource>

@property (nonatomic, readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HAPPairingIdentity *hh1ControllerIdentity;
@property (nonatomic, readonly) NSArray *inProgressPairingAccessories;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

- (id)bulletinBoard;
- (void)deletePairingAccessoryState:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
- (id)hh1ControllerIdentity;
- (id)inProgressPairingAccessories;
- (id)initWithContext:(id)arg1;
- (id)notificationCenter;
- (id)timerWithInterval:(double)arg1 options:(unsigned long long)arg2;
- (void)updatePairingAccessoryState:(id)arg1;

@end
