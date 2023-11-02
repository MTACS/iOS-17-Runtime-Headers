
@protocol PXMutableDisplayAssetViewModel

@required

- (bool)allowsTextSelection;
- (<PXDisplayAsset> *)asset;
- (NSArray *)audioIdentifiersToHighlight;
- (long long)contentMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentSafeAreaInsets;
- (UIImage *)currentImage;
- (NSArray *)humanActionIdentifiersToHighlight;
- (bool)isDisplayingFullQualityContent;
- (NSError *)loadingError;
- (float)loadingProgress;
- (NSArray *)personLocalIdentifiersToHighlight;
- (NSArray *)sceneIdentifiersToHighlight;
- (void)setAllowsTextSelection:(bool)arg1;
- (void)setAsset:(id <PXDisplayAsset>)arg1;
- (void)setAudioIdentifiersToHighlight:(NSArray *)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCurrentImage:(UIImage *)arg1;
- (void)setHumanActionIdentifiersToHighlight:(NSArray *)arg1;
- (void)setIsDisplayingFullQualityContent:(bool)arg1;
- (void)setLoadingError:(NSError *)arg1;
- (void)setLoadingProgress:(float)arg1;
- (void)setPersonLocalIdentifiersToHighlight:(NSArray *)arg1;
- (void)setSceneIdentifiersToHighlight:(NSArray *)arg1;
- (void)setStringsToHighlight:(NSArray *)arg1;
- (void)setTimeRangesToHighlight:(NSArray *)arg1;
- (void)setWantsLivePhotoPlayback:(bool)arg1;
- (NSArray *)stringsToHighlight;
- (NSArray *)timeRangesToHighlight;
- (bool)wantsLivePhotoPlayback;

@end
