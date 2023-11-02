
@interface PHCloudSharedAlbum : PHAssetCollection {
    short  _cloudAlbumSubtype;
    bool  _cloudMultipleContributorsEnabled;
    NSNumber * _cloudOwnerEmailKey;
    NSString * _cloudOwnerFirstName;
    NSString * _cloudOwnerFullName;
    NSString * _cloudOwnerHashedPersonID;
    NSString * _cloudOwnerLastName;
    NSString * _cloudOwnerPersonID;
    bool  _owned;
    bool  _publicURLEnabled;
}

@property (nonatomic, readonly) short cloudAlbumSubtype;
@property (getter=isCloudMultipleContributorsEnabled, nonatomic, readonly) bool cloudMultipleContributorsEnabled;
@property (nonatomic, readonly) NSString *cloudOwnerEmail;
@property (nonatomic, readonly, retain) NSNumber *cloudOwnerEmailKey;
@property (nonatomic, readonly, retain) NSString *cloudOwnerFirstName;
@property (nonatomic, readonly, retain) NSString *cloudOwnerFullName;
@property (nonatomic, readonly, retain) NSString *cloudOwnerHashedPersonID;
@property (nonatomic, readonly, retain) NSString *cloudOwnerLastName;
@property (nonatomic, readonly) NSString *cloudOwnerPersonID;
@property (nonatomic, readonly) NSString *cloudOwnerPhone;
@property (nonatomic, readonly) NSArray *invitationRecords;
@property (getter=isOwned, nonatomic, readonly) bool owned;
@property (nonatomic, readonly) bool publicURLEnabled;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)fetchCloudSharedAlbumsWithGUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchCloudSharedAlbumsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (short)cloudAlbumSubtype;
- (id)cloudOwnerEmail;
- (id)cloudOwnerEmailKey;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerHashedPersonID;
- (id)cloudOwnerLastName;
- (id)cloudOwnerPersonID;
- (id)cloudOwnerPhone;
- (bool)collectionHasFixedOrder;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)invitationRecords;
- (bool)isCloudMultipleContributorsEnabled;
- (bool)isCloudSharedAlbum;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwned;
- (bool)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (bool)publicURLEnabled;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_debugDictionary;

@end
