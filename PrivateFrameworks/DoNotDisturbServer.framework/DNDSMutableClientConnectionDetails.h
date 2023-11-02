
@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (nonatomic, copy) NSSet *activeAssertionUpdateClientIdentifiers;
@property (nonatomic, copy) NSSet *assertionUpdateClientIdentifiers;
@property (nonatomic, copy) NSUUID *interruptionInvalidationAssertionUUID;
@property (nonatomic) bool wantsActiveModeUpdates;
@property (nonatomic) bool wantsGlobalConfigurationUpdates;
@property (nonatomic) bool wantsMeDeviceStateUpdates;
@property (nonatomic) bool wantsModeUpdates;
@property (nonatomic) bool wantsSettingsUpdates;
@property (nonatomic) bool wantsStateUpdates;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveAssertionUpdateClientIdentifiers:(id)arg1;
- (void)setAssertionUpdateClientIdentifiers:(id)arg1;
- (void)setInterruptionInvalidationAssertionUUID:(id)arg1;
- (void)setWantsActiveModeUpdates:(bool)arg1;
- (void)setWantsGlobalConfigurationUpdates:(bool)arg1;
- (void)setWantsMeDeviceStateUpdates:(bool)arg1;
- (void)setWantsModeUpdates:(bool)arg1;
- (void)setWantsSettingsUpdates:(bool)arg1;
- (void)setWantsStateUpdates:(bool)arg1;

@end
