
@interface SSRestrictions : NSObject

+ (bool)_calculateIsRestrictionsPasscodeSet;
+ (bool)_isExplicitContentDisallowedInCurrentStoreFront;
+ (bool)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+ (void)didDisplayExplicitRestrictionAlertOfType:(long long)arg1;
+ (bool)isActiveAccountAllowedToUpdateRestrictions;
+ (void)isExplicitContentDisallowedInCurrentStoreFront:(id /* block */)arg1;
+ (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id /* block */)arg1;
+ (void)isRestrictionsPasscodeSet:(id /* block */)arg1;
+ (void)setAllowExplicitContent;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)shouldDisplayExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(id /* block */)arg2;

@end
