
@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying> {
    NSSet * _activeAssertionUpdateClientIdentifiers;
    NSSet * _assertionUpdateClientIdentifiers;
    NSUUID * _interruptionInvalidationAssertionUUID;
    bool  _wantsActiveModeUpdates;
    bool  _wantsGlobalConfigurationUpdates;
    bool  _wantsMeDeviceStateUpdates;
    bool  _wantsModeUpdates;
    bool  _wantsSettingsUpdates;
    bool  _wantsStateUpdates;
}

@property (nonatomic, readonly, copy) NSSet *activeAssertionUpdateClientIdentifiers;
@property (nonatomic, readonly, copy) NSSet *assertionUpdateClientIdentifiers;
@property (nonatomic, readonly, copy) NSUUID *interruptionInvalidationAssertionUUID;
@property (nonatomic, readonly) bool wantsActiveModeUpdates;
@property (nonatomic, readonly) bool wantsGlobalConfigurationUpdates;
@property (nonatomic, readonly) bool wantsMeDeviceStateUpdates;
@property (nonatomic, readonly) bool wantsModeUpdates;
@property (nonatomic, readonly) bool wantsSettingsUpdates;
@property (nonatomic, readonly) bool wantsStateUpdates;

- (void).cxx_destruct;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 activeAssertionUpdateClientIdentifiers:(id)arg3 wantsStateUpdates:(bool)arg4 wantsSettingsUpdates:(bool)arg5 wantsModeUpdates:(bool)arg6 wantsActiveModeUpdates:(bool)arg7 wantsGlobalConfigurationUpdates:(bool)arg8 wantsMeDeviceStateUpdates:(bool)arg9;
- (id)activeAssertionUpdateClientIdentifiers;
- (id)assertionUpdateClientIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)interruptionInvalidationAssertionUUID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)wantsActiveModeUpdates;
- (bool)wantsGlobalConfigurationUpdates;
- (bool)wantsMeDeviceStateUpdates;
- (bool)wantsModeUpdates;
- (bool)wantsSettingsUpdates;
- (bool)wantsStateUpdates;

@end
