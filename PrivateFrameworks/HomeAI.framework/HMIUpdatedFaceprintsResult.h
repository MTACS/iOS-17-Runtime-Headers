
@interface HMIUpdatedFaceprintsResult : HMFObject {
    NSSet * _createdAtCurrentVersion;
    NSSet * _existingAtCurrentVersion;
    NSSet * _existingAtOtherVersions;
}

@property (readonly) NSSet *allAtCurrentVersion;
@property (readonly) NSSet *createdAtCurrentVersion;
@property (readonly) NSSet *existingAtCurrentVersion;
@property (readonly) NSSet *existingAtOtherVersions;

- (void).cxx_destruct;
- (id)allAtCurrentVersion;
- (id)createdAtCurrentVersion;
- (id)existingAtCurrentVersion;
- (id)existingAtOtherVersions;
- (id)initWithExistingAtCurrentVersion:(id)arg1 createdAtCurrentVersion:(id)arg2 existingAtOtherVersions:(id)arg3;

@end
