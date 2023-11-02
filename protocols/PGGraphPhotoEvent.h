
@protocol PGGraphPhotoEvent <PGGraphEvent>

@required

+ (NSArray *)scoreSortDescriptors;

- (PHAssetCollection *)fetchAssetCollectionInPhotoLibrary:(PHPhotoLibrary *)arg1;
- (NSString *)localIdentifier;

@end
