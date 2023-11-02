
@protocol PUPhotoEditToolControllerDelegate <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource>

@required

- (void)addCropToolGainMapIfNeeded;
- (void)configureEnablenessOfControlButton:(NSObject *)arg1 animated:(bool)arg2 canVisuallyDisable:(bool)arg3;
- (PUPhotoEditToolController *)currentTool;
- (void)dismissLivePhotoRevertConfirmationAlert;
- (void)flashTransientBadgeWithText:(NSString *)arg1;
- (UIFont *)fontForButtons;
- (bool)hasLoopingVideoAdjustment;
- (<NUImageProperties> *)imageProperties;
- (void)initialCinematographyLoadComplete;
- (bool)isHighframeRateVideo;
- (bool)isImageZooming;
- (bool)isLoopingVideo;
- (bool)isPortraitVideo;
- (bool)isStandardVideo;
- (bool)isVideoOn;
- (PELivePortraitBehaviorController *)livePortraitBehaviorController;
- (PHLivePhotoView *)mainLivePhotoView;
- (NUMediaView *)mediaView;
- (void)removeCropToolGainMap;
- (void)toggleLivePhotoActive;
- (void)toolController:(PUPhotoEditToolController *)arg1 didChangePreferredPreviewViewInsetsAnimated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })toolController:(PUPhotoEditToolController *)arg1 originalPointFromViewPoint:(struct CGPoint { double x1; double x2; })arg2 view:(UIView *)arg3;
- (void)toolController:(PUPhotoEditToolController *)arg1 showVideoScrubber:(bool)arg2 animated:(bool)arg3;
- (void)toolController:(PUPhotoEditToolController *)arg1 updateModelDependentControlsAnimated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })toolController:(PUPhotoEditToolController *)arg1 viewPointFromOriginalPoint:(struct CGPoint { double x1; double x2; })arg2 view:(UIView *)arg3;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeWantsTapToToggleOriginalEnabled:(PUPhotoEditToolController *)arg1 enabled:(bool)arg2;
- (void)toolControllerDidFinish:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidFinishLoadingThumbnails:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidUpdateToolbar:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerHitEventForwardView:(PUPhotoEditToolController *)arg1;
- (struct { long long x1; float x2; })toolControllerImageModulationOptions:(PUPhotoEditToolController *)arg1;
- (PHLivePhoto *)toolControllerLivePhoto:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerMainContainerView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditRenderer *)toolControllerMainRenderer:(PUPhotoEditToolController *)arg1;
- (PICompositionController *)toolControllerOriginalCompositionController:(PUPhotoEditToolController *)arg1;
- (struct CGSize { double x1; double x2; })toolControllerOriginalImageSize:(PUPhotoEditToolController *)arg1;
- (struct CGSize { double x1; double x2; })toolControllerOriginalOrientedImageSize:(PUPhotoEditToolController *)arg1;
- (UIImage *)toolControllerPlaceholderImage:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerPreviewView:(PUPhotoEditToolController *)arg1;
- (void)toolControllerRequestLivePhoto:(void *)arg1 filters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PUPhotoEditToolController *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PHLivePhoto *, void*
- (unsigned long long)toolControllerSourceAssetType:(PUPhotoEditToolController *)arg1;
- (PICompositionController *)toolControllerUneditedCompositionController:(PUPhotoEditToolController *)arg1;
- (void)updateProgressIndicatorAnimated:(bool)arg1;

@end
