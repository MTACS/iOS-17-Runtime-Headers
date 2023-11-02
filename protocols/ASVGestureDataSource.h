
@protocol ASVGestureDataSource

@required

- (id)assetHeadScreenPositionForScale;
- (id)assetNaturalSize;
- (float)assetPitch;
- (float)assetScale;
- (float)assetScaleToFitUnitBox;
- (id)assetScreenPosition;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })assetTransform;
- (id)assetWorldPosition;
- (float)assetYaw;
- (bool)screenPointIsOnAsset;

@end
