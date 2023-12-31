
@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {
    int  _cachedAutoFillRestrictionValue;
    int  _cachedPasswordAutoFillEffectiveValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *preferredCredentialProviderForSaving;
@property (nonatomic) bool shouldAutoFillPasswords;
@property (nonatomic) bool shouldAutoFillPasswordsFromKeychain;
@property (readonly) Class superclass;

+ (id)_syncManager;
+ (void)autoFillPreferencesDidChange;
+ (struct __CFString { }*)autoFillPreferencesDomain;
+ (bool)defaultValueForPasswordAndCreditCardAutoFill;
+ (id)sharedFeatureManager;

- (void)_refreshCachedAutoFillRestrictionValues;
- (void)dealloc;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setShouldAutoFillPasswords:(bool)arg1;
- (void)setShouldAutoFillPasswordsFromKeychain:(bool)arg1;
- (bool)shouldAutoFillPasswords;
- (bool)shouldAutoFillPasswordsFromKeychain;

@end
