
@interface SSPhotoFromFilesResultBuilder : SSPhotosResultBuilder

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (bool)supportsResult:(id)arg1;

- (id)appBundleId;
- (id)buildCommand;
- (id)buildPreviewCommand;
- (id)buildThumbnail;
- (id)initWithResult:(id)arg1;

@end
