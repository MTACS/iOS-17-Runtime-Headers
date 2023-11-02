
@interface SiriUIUtilities : NSObject

+ (id)_normalizeTextString:(id)arg1;
+ (id)defaultBrowserBundleIdentifier;
+ (id)descriptionForAceView:(id)arg1;
+ (id)descriptionForDialog:(id)arg1;
+ (id)descriptionForSayIt:(id)arg1;
+ (id)deviceSpecificKeyForDefaultKey:(id)arg1;
+ (bool)shouldShowHeaderForDirectActionEvent:(long long)arg1;
+ (bool)string:(id)arg1 equalToString:(id)arg2;
+ (bool)string:(id)arg1 isSameAsUserUtterance:(id)arg2;
+ (id)stringForDeviceType;
+ (id)stringForSiriUIBackgroundBlurReason:(long long)arg1;

@end
