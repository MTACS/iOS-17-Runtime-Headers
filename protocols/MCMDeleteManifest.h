
@protocol MCMDeleteManifest <NSObject, NSCopying>

@required

- (MCMConcreteContainerIdentity *)concreteContainerIdentity;
- (<MCMDeleteManifest> *)deleteManifestAfterRemovingUsingLibraryRepairForUser:(MCMLibraryRepairForUser *)arg1 error:(id*)arg2;
- (<MCMDeleteManifest> *)deleteManifestAfterWritingUsingLibraryRepairForUser:(MCMLibraryRepairForUser *)arg1 error:(id*)arg2;
- (NSURL *)readURL;
- (NSURL *)writeURL;

@end
