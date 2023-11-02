
@interface DMCFeatureFlags : NSObject

+ (bool)hasT2;
+ (bool)isAppleInternal;
+ (bool)isAppleWellKnownEnabled;
+ (bool)isBYOD3rdPartyEnabled;
+ (bool)isBYODAppleEnabled;
+ (bool)isBYODEnabled;
+ (bool)isBYODSpyglassEnabled;
+ (bool)isClassCIdentitiesEnabled;
+ (bool)isDeviceManagementAndVPNUIEnabled;
+ (bool)isESSOEnabled;
+ (bool)isESSOTestEnabled;
+ (bool)isHRNEnabled;
+ (bool)isMDACoResidencyEnabled;
+ (bool)isMDAFirmwareVersionEnabled;
+ (bool)isMDAOSVersionEnabled;
+ (bool)isMDAProductTypeEnabled;
+ (bool)isManagedRestoreEnabled;
+ (bool)isORGODeviceSubscriptionEnabled;
+ (bool)isORGOEnabled;
+ (bool)isORGOUserSubscriptionEnabled;
+ (bool)isOrgTokenEnabled;
+ (bool)isRMDMEnabled;
+ (bool)isSecondaryAccountListUIEnabled;
+ (bool)isUAORGOEnabled;
+ (bool)isUserChannelEnabled;
+ (bool)isUserEnrollmentShowsManagedAccountEnabled;
+ (bool)isWatchPairingTokenEnabled;

@end
