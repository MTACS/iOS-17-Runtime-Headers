
@protocol _PLThumbnailLoadingAsset <NSObject>

@required

- (long long)cloudPlaceholderKind;
- (bool)complete;
- (unsigned long long)effectiveThumbnailIndex;
- (NSManagedObjectID *)objectID;
- (PLPhotoLibrary *)pl_photoLibrary;

@optional

- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isHidden;
- (bool)isTrashed;
- (NSString *)thumbnailIdentifier;
- (NSString *)uuid;

@end
