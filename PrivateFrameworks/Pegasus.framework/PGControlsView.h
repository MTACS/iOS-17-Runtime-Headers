
@interface PGControlsView : PGLayoutContainerView <PGButtonViewDelegate> {
    PGButtonView * _actionButton;
    NSArray * _allButtons;
    PGButtonView * _cancelButton;
    PGCABackdropLayerView * _captureOnlyView;
    UIActivityIndicatorView * _contentLoadingIndicator;
    UIView * _contentLoadingIndicatorContainerView;
    UIView * _dimmingView;
    PGDisplayLink * _displayLinkForProgressUpdates;
    NSString * _groupNameBase;
    PGLayoutContainerView * _hidableItemsLayoutContainerView;
    PGButtonView * _liveIndicatorBadgeButton;
    bool  _prefersControlsHidden;
    PGPrerollIndicatorView * _prerollIndicatorView;
    PGProgressIndicator * _progressIndicator;
    PGButtonView * _restoreButton;
    PGButtonView * _skipBackButton;
    PGButtonView * _skipForwardButton;
    PGControlsViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool prefersControlsHidden;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)PG_backdropGroupLeader;
- (bool)PG_preferredVisibilityForView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_prerollIndicatorFrameWithScaling:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_progressIndicatorFrameWithScaling:(double)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (bool)_showsDimmingView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })buttonView:(id)arg1 imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 proposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })buttonView:(id)arg1 titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 proposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)buttonViewDidReceiveTouchUpInside:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewModel:(id)arg2;
- (void)layoutSubviews;
- (bool)prefersControlsHidden;
- (void)setPrefersControlsHidden:(bool)arg1;
- (void)updateControlsAlpha;
- (void)updateControlsHidden;
- (void)updateProgress;
- (void)viewModelDidUpdateValuesFromOldValues:(id)arg1;

@end
