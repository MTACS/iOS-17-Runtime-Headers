
@interface PHCameraSmartSharingMetadata : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    NSArray * _filterContactIDs;
    NSArray * _frequentLocations;
    NSArray * _homeLocations;
    NSArray * _identities;
    NSString * _libraryScopeLocalIdentifier;
    bool  _locationShiftingRequired;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSArray *filterContactIDs;
@property (nonatomic, readonly) NSArray *frequentLocations;
@property (nonatomic, readonly) bool hasActiveLibraryScope;
@property (nonatomic, readonly) NSArray *homeLocations;
@property (nonatomic, readonly) NSArray *identities;
@property (nonatomic, readonly) NSString *libraryScopeLocalIdentifier;
@property (nonatomic, readonly) bool locationShiftingRequired;

+ (id)_metadataFileURLForPhotoLibrary:(id)arg1;
+ (id)_readMetadataFromFileURL:(id)arg1;
+ (id)retrieveMetadataForPhotoLibrary:(id)arg1;
+ (bool)storeMetadata:(id)arg1 forPhotoLibrary:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterContactIDs;
- (id)frequentLocations;
- (bool)hasActiveLibraryScope;
- (id)homeLocations;
- (id)identities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryScopeIdentifier:(id)arg1 filterContactIDs:(id)arg2 homeLocations:(id)arg3 isOnTrip:(bool)arg4;
- (id)initWithLibraryScopeIdentifier:(id)arg1 identities:(id)arg2 homeLocations:(id)arg3 frequentLocations:(id)arg4 locationShiftingRequired:(bool)arg5;
- (id)libraryScopeLocalIdentifier;
- (bool)locationShiftingRequired;

@end
