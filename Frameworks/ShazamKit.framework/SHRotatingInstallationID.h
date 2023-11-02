
@interface SHRotatingInstallationID : NSObject

+ (id)cachedInstallationForDays:(long long)arg1;
+ (id)cachedInstallationIDForUTCDay;
+ (id)cachedInstallationIDWithMaxAge:(double)arg1;
+ (id)creationDate;
+ (id)installationID;
+ (void)setCreationDate:(id)arg1;
+ (void)setInstallationID:(id)arg1;

@end
