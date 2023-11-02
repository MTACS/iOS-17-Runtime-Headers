
@protocol PHThumbnailAsset <NSCopying, NSObject, PHPhotoLibraryAsset>

@required

- (long long)cloudPlaceholderKind;
- (bool)complete;
- (NSManagedObjectID *)objectID;
- (unsigned long long)thumbnailIndex;

@end
