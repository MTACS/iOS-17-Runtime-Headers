
@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
