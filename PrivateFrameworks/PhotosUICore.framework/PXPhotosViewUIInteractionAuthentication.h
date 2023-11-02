
@interface PXPhotosViewUIInteractionAuthentication : NSObject {
    bool  _hasAlreadyPromptedUserAlert;
    bool  _isDeveloperMode;
    bool  _isInternal;
    bool  _isLockdownMode;
    NSDictionary * _serverConfiguration;
}

@property (nonatomic) bool hasAlreadyPromptedUserAlert;
@property (nonatomic, readonly) bool isDeveloperMode;
@property (nonatomic, readonly) bool isInternal;
@property (nonatomic, readonly) bool isLockdownMode;
@property (nonatomic, retain) NSDictionary *serverConfiguration;
@property (nonatomic, readonly) bool shouldEnableForInternalApps;

+ (id)sharedAuthentication;

- (void).cxx_destruct;
- (void)checkAndUpdateIsDisabledTouchAuthentication;
- (void)collectAnalyticsWithGestureType:(long long)arg1 isSingleRowCompactMode:(bool)arg2 canIgnoreTouches:(bool)arg3 pickerClientBundleIdentifier:(id)arg4 isInternalClient:(bool)arg5 hasAuthenticationRecord:(bool)arg6 touchIsAuthentic:(bool)arg7 couldLeadToSensitiveDataTransmission:(bool)arg8 shouldIgnoreTouch:(bool)arg9;
- (bool)hasAlreadyPromptedUserAlert;
- (id)init;
- (bool)isDeveloperMode;
- (bool)isDisabledForPickerClientBundleIdentifier:(id)arg1;
- (bool)isInternal;
- (bool)isLockdownMode;
- (bool)promptUserAlertIfNeededForPickerClientBundleIdentifier:(id)arg1;
- (bool)requiresTouchAuthenticationForPickerClientBundleIdentifier:(id)arg1;
- (id)serverConfiguration;
- (void)setHasAlreadyPromptedUserAlert:(bool)arg1;
- (void)setServerConfiguration:(id)arg1;
- (bool)shouldEnableForInternalApps;

@end
