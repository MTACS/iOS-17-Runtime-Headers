
@interface PXStoryTVInfoPanelView : UIView <PXChangeObserver, PXGReusableView> {
    NSLayoutConstraint * _assetContainerConstraintAspectRatio;
    NSLayoutConstraint * _assetContainerConstraintBottom;
    NSLayoutConstraint * _assetContainerConstraintLeading;
    NSLayoutConstraint * _assetContainerConstraintTop;
    UIView * _assetContainerView;
    PXDisplayAssetContentView * _assetView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    UILabel * _colorGradeLabel;
    NSLayoutConstraint * _colorGradeLabelLeadingConstraint;
    NSLayoutConstraint * _colorGradeLabelTrailingConstraint;
    NSLayoutConstraint * _colorGradeSymbolCenterConstraint;
    UIImageView * _colorGradeSymbolView;
    UIFocusGuide * _focusGuide;
    UILabel * _footerLabel;
    NSLayoutConstraint * _footerLabelBaselineConstraint;
    NSLayoutConstraint * _footerLabelLeadingConstraint;
    NSLayoutConstraint * _footerLabelTrailingConstraint;
    PXStoryTVInfoPanelButton * _infoButton;
    NSLayoutConstraint * _infoButtonBottomConstraint;
    NSLayoutConstraint * _infoButtonHeightConstraint;
    NSLayoutConstraint * _infoButtonLeadingConstraint;
    PXStoryModel * _mainModel;
    UILabel * _musicLabel;
    NSLayoutConstraint * _musicLabelLeadingConstraint;
    NSLayoutConstraint * _musicLabelTrailingConstraint;
    NSLayoutConstraint * _musicSymbolCenterConstraint;
    UIImageView * _musicSymbolView;
    NSLayoutConstraint * _musicToColorGradeBaselineConstraint;
    NSLayoutConstraint * _panelHeightConstraint;
    NSLayoutConstraint * _panelMarginConstraintBottom;
    NSLayoutConstraint * _panelMarginConstraintLeading;
    NSLayoutConstraint * _panelMarginConstraintTrailing;
    PXStoryRecipeManager * _recipeManager;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelBaselineConstraint;
    NSLayoutConstraint * _titleLabelLeadingConstraint;
    NSLayoutConstraint * _titleLabelTrailingConstraint;
    NSLayoutConstraint * _titleToMetadataBaselineConstraint;
    PXUpdater * _updater;
    PXStoryTVInfoPanelViewConfiguration * _userData;
    PXStoryViewModel * _viewModel;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXStoryModel *mainModel;
@property (nonatomic, retain) PXStoryRecipeManager *recipeManager;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, copy) PXStoryTVInfoPanelViewConfiguration *userData;
@property (nonatomic, retain) PXStoryViewModel *viewModel;

+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_invalidateAutolayoutConstraints;
- (void)_invalidateColorGradeLabel;
- (void)_invalidateCompositingFilters;
- (void)_invalidateContentAlpha;
- (void)_invalidateFooterLabel;
- (void)_invalidateKeyAsset;
- (void)_invalidateMainModel;
- (void)_invalidateMusicLabel;
- (void)_invalidateRecipeManager;
- (void)_invalidateTitleLabel;
- (void)_reuseAssetView;
- (void)_setNeedsUpdate;
- (void)_updateAutolayoutConstraints;
- (void)_updateColorGradeLabel;
- (void)_updateCompositingFilters;
- (void)_updateContentAlpha;
- (void)_updateFooterLabel;
- (void)_updateKeyAsset;
- (void)_updateMainModel;
- (void)_updateMusicLabel;
- (void)_updateRecipeManager;
- (void)_updateTitleLabel;
- (void)addHostedLayer:(id)arg1;
- (void)addHostedView:(id)arg1;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (struct CGPoint { double x1; double x2; })convertHostedChildCenter:(struct CGPoint { double x1; double x2; })arg1 fromGlobalLayer:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mainModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (id)recipeManager;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMainModel:(id)arg1;
- (void)setRecipeManager:(id)arg1;
- (void)setUserData:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)updater;
- (id)userData;
- (id)viewModel;

@end
