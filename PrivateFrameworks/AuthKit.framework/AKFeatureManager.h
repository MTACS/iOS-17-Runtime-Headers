
@interface AKFeatureManager : NSObject {
    bool  _appleIDSessionTelemetryEnabled;
    bool  _cachedIsAppleIDPasskeyFeatureEnabled;
    bool  _cachedIsChildPasscodeEnabled;
    bool  _cachedIsDeviceListCacheEnabled;
    bool  _cachedIsFamilyAccountEnabled;
    bool  _cachedIsForgotPasswordNativeTakeoverEnabled;
    bool  _cachedIsHawksbillEnabled;
    bool  _cachedIsLisbonAvailable;
}

@property (getter=isAppleIDPasskeyFeatureEnabled, nonatomic, readonly) bool appleIDPasskeyFeatureEnabled;
@property (getter=isAppleIDSessionTelemetryEnabled, nonatomic, readonly) bool appleIDSessionTelemetryEnabled;
@property (getter=isChildPasscodeEnabled, nonatomic, readonly) bool childPasscodeEnabled;
@property (getter=isDeviceListCacheEnabled, nonatomic, readonly) bool deviceListCacheEnabled;
@property (getter=isFamilyAccountEnabled, nonatomic, readonly) bool enableFamilyAccount;
@property (getter=isHawksbillEnabled, nonatomic, readonly) bool enableHawksbill;
@property (getter=isForgotPasswordNativeTakeoverEnabled, nonatomic, readonly) bool forgotPasswordNativeTakeoverEnabled;
@property (getter=isLisbonAvailable, nonatomic, readonly) bool lisbonAvailable;

+ (bool)isEasyDependentSignInEnabled;
+ (bool)isEnforceMDMPolicyEnabled;
+ (bool)isProxAuthEnabled;
+ (bool)isProxForAuthkitEnabled;
+ (bool)isYorktownEnabled;
+ (bool)overrideAidProxAdvertismentEnabled;
+ (id)sharedManager;

- (id)init;
- (bool)isAppleIDPasskeyFeatureEnabled;
- (bool)isAppleIDSessionTelemetryEnabled;
- (bool)isChildPasscodeEnabled;
- (bool)isDeviceListCacheEnabled;
- (bool)isFamilyAccountEnabled;
- (bool)isForgotPasswordNativeTakeoverEnabled;
- (bool)isHawksbillEnabled;
- (bool)isLisbonAvailable;

@end
