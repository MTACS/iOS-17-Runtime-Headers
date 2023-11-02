
@interface TSUtilities : NSObject

+ (id)_findPPRItem:(id)arg1;
+ (id)backgroundColorForRemotePlan:(bool)arg1;
+ (id)formattedPhoneNumber:(id)arg1 withCountryCode:(id)arg2;
+ (id)getByteRepresentationOf:(id)arg1;
+ (id)getErrorTitleDetail:(id)arg1 forCarrier:(id)arg2;
+ (bool)inBuddy;
+ (bool)isBackAllowed:(id)arg1;
+ (bool)isDeviceLocked;
+ (bool)isGreenTeaCapable;
+ (bool)isOnBootstrap;
+ (bool)isPad;
+ (bool)isRegRestActiveLocationAuthorizedOff:(id)arg1;
+ (bool)isRegRestActiveLocationServiceOff:(id)arg1;
+ (bool)isRegulatoryRestrictionActive:(id)arg1;
+ (bool)isSecureIntentUIRequired:(id)arg1;
+ (bool)isWifiAvailable;
+ (void)launchURL:(id)arg1;
+ (unsigned long long)odaPlans:(id)arg1;
+ (id)preinstallPPRAlertControllerWithItems:(id)arg1 completion:(id /* block */)arg2;
+ (id)productClass;
+ (id)secureIntentAccessControlItem;
+ (id)textColorForRemotePlan:(bool)arg1;
+ (bool)transferOptions;
+ (unsigned long long)transferablePlans:(id)arg1;

@end
