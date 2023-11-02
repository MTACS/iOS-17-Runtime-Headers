
@interface _PLGenericAlbum : PLManagedObject

@property (nonatomic, retain) NSMutableSet *albumLists;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (nonatomic, retain) PLManagedAsset *customKeyAsset;
@property (nonatomic) bool customSortAscending;
@property (nonatomic) int customSortKey;
@property (nonatomic, retain) NSNumber *kind;
@property (nonatomic, retain) PLManagedFolder *parentFolder;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic) long long syncEventOrderKey;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

@end
