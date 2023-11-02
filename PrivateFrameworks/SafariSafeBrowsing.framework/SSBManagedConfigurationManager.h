
@interface SSBManagedConfigurationManager : NSObject

+ (bool)isSafeBrowsingEnabledStateLockedDownByRestrictions;
+ (bool)restrictedBoolValueForSafeBrowsing;

@end
