
@interface AMSCookieStorage : NSObject

+ (id)cookiesForAccount:(id)arg1 cookieDatabaseOnly:(bool)arg2 error:(id*)arg3;
+ (id)cookiesForAccount:(id)arg1 error:(id*)arg2;
+ (bool)isCookieDomainMigrationEnabled;
+ (bool)updateCookiesWithCookiesToAdd:(id)arg1 cookiesToRemove:(id)arg2 forAccount:(id)arg3 error:(id*)arg4;

@end
