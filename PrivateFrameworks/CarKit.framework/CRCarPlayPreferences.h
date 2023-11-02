
@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver> {
    bool  _cachedCarPlayAllowed;
    <CRCarPlayPreferencesDelegate> * _preferencesDelegate;
}

@property (nonatomic) bool cachedCarPlayAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CRCarPlayPreferencesDelegate> *preferencesDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_boolValueInCarPlayDomainForKey:(struct __CFString { }*)arg1;
- (bool)_isCarPlayAllowed;
- (void)_updateCarPlayAllowed;
- (bool)cachedCarPlayAllowed;
- (void)dealloc;
- (id)init;
- (id)isCCCHeadUnitPairingOverrideEnabled;
- (bool)isCarPlayAllowed;
- (bool)isCarPlayCapable;
- (id)isCarPlaySetupEnabled;
- (bool)isWirelessCarPlayEnabled;
- (id)preferencesDelegate;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCachedCarPlayAllowed:(bool)arg1;
- (void)setPreferencesDelegate:(id)arg1;
- (id)shouldAlwaysAcceptCCCHeadUnitPairing;

@end
