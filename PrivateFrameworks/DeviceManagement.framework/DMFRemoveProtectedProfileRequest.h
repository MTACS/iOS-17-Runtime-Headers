
@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
