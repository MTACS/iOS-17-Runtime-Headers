
@interface _TtCC8VideosUI16FlowcaseViewCell19FlowcaseOverlayView : VUIBaseView <VUIImageSampling, VUIScorecardViewDelegate> {
    void $__lazy_storage_$_logoGradientView;
    void $__lazy_storage_$_opacityMaskLayer;
    void $__lazy_storage_$_playbackGradientView;
    void $__lazy_storage_$_visualEffectContainerView;
    void $__lazy_storage_$_visualEffectView;
    void alphaImageView;
    void backgroundImageForMaterial;
    void backgroundImageHasChanged;
    void badgeView;
    void channelLogoView;
    void disableGradient;
    void gradientColor;
    void isOperationCancelledObserver;
    void isOperationFinishedObserver;
    void isPlayingVideo;
    void logoImageView;
    void nonPlaybackGradientView;
    void originalScoreboardViewModel;
    void overlayLayout;
    void pendingOperation;
    void scoreboardViewModel;
    void scorecardView;
    void scorecardViewBackgroundImage;
    void titleView;
    void transitionAnimationDuration;
    void verticalStackView;
}

- (void).cxx_destruct;
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginsForRow:(long long)arg1 atIndex:(long long)arg2;
- (double)maximumWidthForScorecardView:(id)arg1;
- (long long)numberOfRowsInScorecardView:(id)arg1;
- (long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
- (void)sampleWithImage:(id)arg1;
- (id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)styleForScorecardView:(id)arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
