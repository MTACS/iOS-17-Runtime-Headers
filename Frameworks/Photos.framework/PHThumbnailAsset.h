
@interface PHThumbnailAsset : NSObject <PHBatchFetchedPropertySet, PHThumbnailAsset, PXDisplayThumbnailAsset, _PLThumbnailLoadingAsset> {
    NSKnownKeysDictionary * _dictionary;
    NSManagedObjectID * _objectID;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) long long cloudPlaceholderKind;
@property (nonatomic, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)entityName;
+ (id)fetchType;
+ (id)propertiesToFetch;
+ (id)propertiesToSortBy;
+ (bool)useNoIndexSelf;
+ (bool)useObjectFetchingContext;

- (void).cxx_destruct;
- (long long)cloudPlaceholderKind;
- (bool)complete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)effectiveThumbnailIndex;
- (unsigned long long)hash;
- (id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)objectID;
- (id)photoLibrary;
- (id)pl_photoLibrary;
- (unsigned long long)thumbnailIndex;

@end
