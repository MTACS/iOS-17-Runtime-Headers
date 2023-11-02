
@interface MCMDeleteManifest : NSObject <MCMDeleteManifest> {
    MCMConcreteContainerIdentity * _concreteContainerIdentity;
    NSURL * _readURL;
    MCMUserIdentityCache * _userIdentityCache;
    NSURL * _writeURL;
}

@property (nonatomic, readonly) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *readURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;
@property (nonatomic, readonly) NSURL *writeURL;

+ (id)_deleteManifestsForManagedPath:(id)arg1 userIdentityCache:(id)arg2;
+ (id)_deleteManifestsFromFileURLs:(id)arg1 userIdentityCache:(id)arg2;
+ (id)_deleteManifestsFromURL:(id)arg1 userIdentityCache:(id)arg2 error:(id*)arg3;
+ (id)_materializeContainerIdentityFromManifestPlist:(id)arg1 userIdentityCache:(id)arg2 error:(id*)arg3;
+ (id)_materializeContainerIdentityFromManifestPlistV1:(id)arg1 userIdentityCache:(id)arg2 error:(id*)arg3;
+ (id)deleteManifestsForGlobalContainersWithUserIdentityCache:(id)arg1;
+ (id)deleteManifestsForUserContainersForPOSIXUser:(id)arg1 userIdentityCache:(id)arg2;
+ (id)deleteManifestsForUserContainersWithUserIdentityCache:(id)arg1;
+ (id)managedPathForGlobalContainers;
+ (id)managedPathForUserContainersWithUserIdentityCache:(id)arg1;
+ (id)managedPathForUserContainersWithUserIdentityCache:(id)arg1 forPOSIXUser:(id)arg2;

- (void).cxx_destruct;
- (id)_stableFileNameForDeleteOperationPlistWithContainerIdentity:(id)arg1;
- (id)_urlForDeleteManifestWithContainerIdentity:(id)arg1;
- (id)concreteContainerIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteManifestAfterRemovingUsingLibraryRepairForUser:(id)arg1 error:(id*)arg2;
- (id)deleteManifestAfterWritingUsingLibraryRepairForUser:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)initFromURL:(id)arg1 userIdentityCache:(id)arg2 error:(id*)arg3;
- (id)initWithConcreteContainerIdentity:(id)arg1 userIdentityCache:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeleteManifest:(id)arg1;
- (id)readURL;
- (void)setReadURL:(id)arg1;
- (id)userIdentityCache;
- (id)writeURL;

@end
