
@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
