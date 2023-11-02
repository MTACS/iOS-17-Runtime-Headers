
@interface PUPhotoKitAirPlayActionPerformer : PUPhotoKitActionPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)_handleDismissedAirPlayPicker;
- (void)_showAirPlayPicker;
- (void)performUserInteractionTask;

@end
