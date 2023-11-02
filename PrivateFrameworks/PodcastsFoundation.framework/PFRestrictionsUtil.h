
@interface PFRestrictionsUtil : NSObject

+ (bool)_fetchIsExplicitContentAllowed;
+ (bool)isActiveAccountAllowedToUpdateRestrictions;
+ (bool)isExplicitContentAllowed;
+ (bool)isRestrictedByAdministrator;
+ (bool)mustResolveInScreenTimePreferences;
+ (void)reloadSettings;
+ (void)setAllowExplicitContent;

@end
