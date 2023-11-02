
@interface PHSmartAlbumChangeRequest : PHChangeRequest {
    PLQuery * _userQuery;
}

@property (nonatomic) bool customSortAscending;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedSmartAlbum;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) PLQuery *userQuery;

+ (id)_changeRequestForSmartAlbum:(id)arg1 userQuery:(id)arg2;
+ (void)_deleteSmartAlbums:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;
+ (id)changeRequestForSmartAlbum:(id)arg1;
+ (id)creationRequestForSmartAlbumCopyFromSmartAlbum:(id)arg1;
+ (id)creationRequestForSmartAlbumWithTitle:(id)arg1 userQuery:(id)arg2;
+ (void)deleteSmartAlbumsFromAssetCollection:(id)arg1;
+ (void)expungeSmartAlbumsFromAssetCollection:(id)arg1;
+ (void)undeleteSmartAlbumsFromAssetCollection:(id)arg1;
+ (id)validateSmartAlbumTitle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)customSortAscending;
- (unsigned int)customSortKey;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)managedEntityName;
- (id)placeholderForCreatedSmartAlbum;
- (void)setCustomSortAscending:(bool)arg1;
- (void)setCustomSortKey:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserQuery:(id)arg1;
- (id)title;
- (id)userQuery;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
