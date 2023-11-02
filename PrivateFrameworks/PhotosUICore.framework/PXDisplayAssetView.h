
@interface PXDisplayAssetView : UIView <PXChangeObserver> {
    bool  _allowsTextSelection;
    <PXDisplayAsset> * _asset;
    NSArray * _audioIdentifiersToHighlight;
    PXDisplayAssetContentView * _contentView;
    NSArray * _humanActionIdentifiersToHighlight;
    bool  _isPerformingLayout;
    PXUIMediaProvider * _mediaProvider;
    PXDisplayAssetCombinedOverlayView * _overlayView;
    NSArray * _personLocalIdentifiersToHighlight;
    NSArray * _sceneIdentifiersToHighlight;
    NSArray * _stringsToHighlight;
    PXUpdater * _updater;
    PXDisplayAssetViewModel * _viewModel;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic) bool allowsTextSelection;
@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (nonatomic, copy) NSArray *audioIdentifiersToHighlight;
@property (nonatomic, retain) PXDisplayAssetContentView *contentView;
@property (nonatomic, readonly) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *humanActionIdentifiersToHighlight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXDisplayAssetCombinedOverlayView *overlayView;
@property (nonatomic, copy) NSArray *personLocalIdentifiersToHighlight;
@property (nonatomic, copy) NSArray *sceneIdentifiersToHighlight;
@property (nonatomic, copy) NSArray *stringsToHighlight;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXDisplayAssetViewModel *viewModel;
@property (nonatomic) struct CGSize { double x1; double x2; } viewportSize;

+ (id)currentLocaleForTesting;
+ (id)localizedTitleForAsset:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredContentsRectForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)setCurrentLocaleForTesting:(id)arg1;

- (void).cxx_destruct;
- (void)_commonPXDisplayAssetViewInit;
- (void)_invalidateContentView;
- (void)_invalidateContentViewLayout;
- (void)_invalidateContentViewProperties;
- (void)_invalidateViewModelProperties;
- (void)_setNeedsUpdate;
- (void)_updateContentView;
- (void)_updateContentViewLayout;
- (void)_updateContentViewProperties;
- (void)_updateViewModelProperties;
- (bool)allowsTextSelection;
- (id)asset;
- (id)audioIdentifiersToHighlight;
- (id)contentView;
- (id)currentImage;
- (void)dealloc;
- (id)humanActionIdentifiersToHighlight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)overlayView;
- (id)personLocalIdentifiersToHighlight;
- (id)sceneIdentifiersToHighlight;
- (void)setAllowsTextSelection:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setAudioIdentifiersToHighlight:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setHumanActionIdentifiersToHighlight:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPersonLocalIdentifiersToHighlight:(id)arg1;
- (void)setSceneIdentifiersToHighlight:(id)arg1;
- (void)setStringsToHighlight:(id)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (id)stringsToHighlight;
- (id)updater;
- (id)viewModel;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
