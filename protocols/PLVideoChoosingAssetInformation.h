
@protocol PLVideoChoosingAssetInformation <NSObject>

@required

- (bool)hasAdjustments;
- (bool)isPhotoIris;
- (bool)shouldUseNonAdjustedVersion;

@end
