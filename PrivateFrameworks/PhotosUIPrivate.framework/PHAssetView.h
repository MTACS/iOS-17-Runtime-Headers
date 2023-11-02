
@interface PHAssetView : UIView {
    bool  _allowsDragging;
    PHAsset * _asset;
    PXPhotoKitAssetView * _impl;
}

@property (nonatomic) bool allowsDragging;
@property (nonatomic) bool allowsTextSelection;
@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, copy) NSArray *audioIdentifiersToHighlight;
@property (nonatomic, copy) NSArray *humanActionIdentifiersToHighlight;
@property (nonatomic, retain) PXPhotoKitAssetView *impl;
@property (nonatomic, copy) NSArray *personLocalIdentifiersToHighlight;
@property (nonatomic, copy) NSArray *sceneIdentifiersToHighlight;
@property (nonatomic, copy) NSArray *stringsToHighlight;

+ (id)localizedTitleForAsset:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredContentsRectForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_commonPHAssetViewInit;
- (bool)allowsDragging;
- (bool)allowsTextSelection;
- (id)asset;
- (id)audioIdentifiersToHighlight;
- (id)humanActionIdentifiersToHighlight;
- (id)impl;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)personLocalIdentifiersToHighlight;
- (id)sceneIdentifiersToHighlight;
- (void)setAllowsDragging:(bool)arg1;
- (void)setAllowsTextSelection:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setAudioIdentifiersToHighlight:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setHumanActionIdentifiersToHighlight:(id)arg1;
- (void)setImpl:(id)arg1;
- (void)setPersonLocalIdentifiersToHighlight:(id)arg1;
- (void)setSceneIdentifiersToHighlight:(id)arg1;
- (void)setStringsToHighlight:(id)arg1;
- (id)stringsToHighlight;

@end
