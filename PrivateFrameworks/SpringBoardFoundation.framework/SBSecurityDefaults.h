
@interface SBSecurityDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool allowLockAndUnlockWithCase;
@property (nonatomic, retain) NSNumber *blockStateGeneration;
@property (getter=isBlockedForPasscode, nonatomic, retain) NSNumber *blockedForPasscode;
@property (getter=isBlockedForThermal, nonatomic) bool blockedForThermal;
@property (getter=isDeviceWipeEnabled, nonatomic, readonly) bool deviceWipeEnabled;
@property (nonatomic, readonly) bool dontLockEver;
@property (nonatomic, readonly) bool enableLayerBasedViewSecurity;
@property (nonatomic, retain) NSNumber *numberOfFailedPasscodeAttempts;
@property (getter=isPendingDeviceWipe, nonatomic, retain) NSNumber *pendingDeviceWipe;
@property (nonatomic, readonly) bool reportSecureDrawViolations;
@property (nonatomic, retain) NSNumber *unblockTimeFromReferenceDate;

- (void)_bindAndRegisterDefaults;
- (id)deviceLockDefaultForKey:(id)arg1;
- (void)setDeviceLockDefault:(id)arg1 forKey:(id)arg2;

@end
