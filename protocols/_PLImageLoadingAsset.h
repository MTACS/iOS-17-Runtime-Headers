
@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset, NSObject>

@required

- (long long)cloudSharedAssetPlaceholderKind;
- (double)duration;
- (void)generateLargeThumbnailFileIfNecessary;
- (bool)hasAdjustments;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isCloudPhotoLibraryAsset;
- (bool)isCloudPlaceholder;
- (bool)isCloudSharedAsset;
- (bool)isInFlight;
- (bool)isJPEG;
- (bool)isLoopingVideo;
- (bool)isOriginalSRGB;
- (bool)isPartOfBurst;
- (bool)isPrimaryImageFormat;
- (bool)isRAW;
- (bool)isStreamedVideo;
- (bool)isTimelapsePlaceholder;
- (bool)isVideo;
- (short)kind;
- (short)kindSubtype;
- (PLManagedAsset *)managedAssetForPhotoLibrary:(PLPhotoLibrary *)arg1;
- (int)orientation;
- (NSString *)originalFilename;
- (long long)originalImageOrientation;
- (struct CGSize { double x1; double x2; })originalImageSize;
- (NSString *)pathForAdjustmentDataFile;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForOriginalFile;
- (short)savedAssetType;
- (NSString *)thumbnailIdentifier;
- (NSString *)uniformTypeIdentifier;
- (NSString *)uuid;

@end
