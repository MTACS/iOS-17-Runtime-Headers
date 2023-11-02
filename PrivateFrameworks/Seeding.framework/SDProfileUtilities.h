
@interface SDProfileUtilities : NSObject

+ (void)forceRemoveSeedingProfile;
+ (id)getAssetAudienceIDForInstalledProfile:(id*)arg1;
+ (id)getInstalledSeedProfile;
+ (void)installProfileWithData:(id)arg1 error:(id*)arg2;
+ (bool)isProfileInstallationAllowed;
+ (void)removeSeedProfileIfRestricted;
+ (bool)removeSeedingProfile;

@end
