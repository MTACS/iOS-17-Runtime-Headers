
@interface SiriContextOverride : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accessibilityShortcutEnabled;
    NSNumber * _carDNDActive;
    NSNumber * _connectedToCarPlay;
    NSNumber * _connectedToTrustedCarPlay;
    NSString * _currentSpokenLanguageCode;
    NSNumber * _deviceIsBlocked;
    NSNumber * _deviceIsPasscodeLocked;
    NSNumber * _pad;
    NSNumber * _pocketStateShouldPreventVoiceTrigger;
    NSNumber * _siriIsEnabled;
    NSNumber * _siriIsRestricted;
    NSNumber * _siriIsSupported;
    NSNumber * _smartCoverClosed;
    NSNumber * _unlockedSinceBoot;
}

@property (nonatomic, retain) NSNumber *accessibilityShortcutEnabled;
@property (nonatomic, retain) NSNumber *carDNDActive;
@property (nonatomic, retain) NSNumber *connectedToCarPlay;
@property (nonatomic, retain) NSNumber *connectedToTrustedCarPlay;
@property (nonatomic, retain) NSString *currentSpokenLanguageCode;
@property (nonatomic, retain) NSNumber *deviceIsBlocked;
@property (nonatomic, retain) NSNumber *deviceIsPasscodeLocked;
@property (nonatomic, retain) NSNumber *pad;
@property (nonatomic, retain) NSNumber *pocketStateShouldPreventVoiceTrigger;
@property (nonatomic, retain) NSNumber *siriIsEnabled;
@property (nonatomic, retain) NSNumber *siriIsRestricted;
@property (nonatomic, retain) NSNumber *siriIsSupported;
@property (nonatomic, retain) NSNumber *smartCoverClosed;
@property (nonatomic, retain) NSNumber *unlockedSinceBoot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityShortcutEnabled;
- (bool)accessibilityShortcutEnabledForSystemState:(id)arg1;
- (id)carDNDActive;
- (bool)carDNDActiveForSystemState:(id)arg1;
- (id)connectedToCarPlay;
- (id)connectedToTrustedCarPlay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpokenLanguageCode;
- (id)currentSpokenLanguageCodeForSystemState:(id)arg1;
- (id)deviceIsBlocked;
- (bool)deviceIsBlockedForSystemState:(id)arg1;
- (id)deviceIsPasscodeLocked;
- (bool)deviceIsPasscodeLockedForSystemState:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUnlockedSinceBootForSystemState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isConnectedToCarPlayForSystemState:(id)arg1;
- (bool)isConnectedToTrustedCarPlayForSystemState:(id)arg1;
- (bool)isPadForSystemState:(id)arg1;
- (void)overrideAccessibilityShortcutEnabled:(bool)arg1;
- (void)overrideCarDNDActive:(bool)arg1;
- (void)overrideConnectedToCarPlay:(bool)arg1;
- (void)overrideConnectedToTrustedCarPlay:(bool)arg1;
- (void)overrideCurrentSpokenLanguageCode:(id)arg1;
- (void)overrideDeviceIsBlocked:(bool)arg1;
- (void)overrideDeviceIsPasscodeLocked:(bool)arg1;
- (void)overrideHasUnlockedSinceBoot:(bool)arg1;
- (void)overrideIsPad:(bool)arg1;
- (void)overridePocketStateShouldPreventVoiceTrigger:(bool)arg1;
- (void)overrideSiriIsEnabled:(bool)arg1;
- (void)overrideSiriIsRestricted:(bool)arg1;
- (void)overrideSiriIsSupported:(bool)arg1;
- (void)overrideSmartCoverClosed:(bool)arg1;
- (id)pad;
- (id)pocketStateShouldPreventVoiceTrigger;
- (bool)pocketStateShouldPreventVoiceTriggerForSystemState:(id)arg1;
- (void)setAccessibilityShortcutEnabled:(id)arg1;
- (void)setCarDNDActive:(id)arg1;
- (void)setConnectedToCarPlay:(id)arg1;
- (void)setConnectedToTrustedCarPlay:(id)arg1;
- (void)setCurrentSpokenLanguageCode:(id)arg1;
- (void)setDeviceIsBlocked:(id)arg1;
- (void)setDeviceIsPasscodeLocked:(id)arg1;
- (void)setPad:(id)arg1;
- (void)setPocketStateShouldPreventVoiceTrigger:(id)arg1;
- (void)setSiriIsEnabled:(id)arg1;
- (void)setSiriIsRestricted:(id)arg1;
- (void)setSiriIsSupported:(id)arg1;
- (void)setSmartCoverClosed:(id)arg1;
- (void)setUnlockedSinceBoot:(id)arg1;
- (id)siriIsEnabled;
- (bool)siriIsEnabledForSystemState:(id)arg1;
- (id)siriIsRestricted;
- (bool)siriIsRestrictedForSystemState:(id)arg1;
- (id)siriIsSupported;
- (bool)siriIsSupportedForSystemState:(id)arg1;
- (id)smartCoverClosed;
- (bool)smartCoverClosedForSystemState:(id)arg1;
- (id)unlockedSinceBoot;

@end
