
@interface HPSSpatialProfileManager : NSObject

+ (bool)isProfileExisting;
+ (bool)isProxCardEnrollmentSupportedForDevice:(id)arg1;
+ (bool)isProxCardShowed;
+ (bool)isSettingsEnrollmentSupported;
+ (id)profileEnrollmentViewController;
+ (id)profileManagementSpecifier;
+ (void)setProxCardShowed:(bool)arg1;
+ (void)setProxCardShowed:(bool)arg1 forDevice:(id)arg2;
+ (id)spatialProfileStatus;

@end
