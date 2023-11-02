
@interface IntentsUtilities : NSObject

+ (id)_displayNameForApp:(id)arg1;
+ (id)fetchEnabledAppIds;
+ (void)intentsAppsWithCompletion:(id /* block */)arg1;
+ (bool)isIntentsEnabledForAppId:(id)arg1;
+ (void)setAccess:(bool)arg1 appID:(id)arg2;

@end
