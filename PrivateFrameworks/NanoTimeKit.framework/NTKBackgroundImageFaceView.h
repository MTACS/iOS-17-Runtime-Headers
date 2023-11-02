
@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate> {
    UIView * _backgroundContainerView;
    UIView * _borrowedCircleView;
    UIView * _borrowedTimeView;
    double  _breathScaleModifier;
    NTKEditOption * _editOptionFrom;
    NTKEditOption * _editOptionTo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maskZoomStartingBounds;
    double  _rubberBandScaleModifier;
    UIView * _selectedContentView;
    bool  _shouldAdjustLayoutForTimeTravel;
    UIView * _timeTravelDimmingOverlayView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _timeViewZoomEndingCenter;
    NTKComplicationDisplayWrapperView * _touchWrapper;
    UIView * _transitionDimmingView;
    UIView * _transitionViewFrom;
    UIView * _transitionViewTo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _vignetteZoomStartingBounds;
    UIView * _zoomMaskView;
    UIImageView * _zoomVignette;
}

@property (nonatomic, readonly) UIView *backgroundContainerView;
@property (nonatomic, retain) UIView *borrowedCircleView;
@property (nonatomic, retain) UIView *borrowedTimeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskZoomStartingBounds;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } timeViewZoomEndingCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } vignetteZoomStartingBounds;
@property (nonatomic, retain) UIView *zoomMaskView;
@property (nonatomic, retain) UIImageView *zoomVignette;

- (void).cxx_destruct;
- (id)_animationImageView;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyScaleTransform:(id)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_beginTransitionToOption;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_didTransitionToOptionView:(id)arg1;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (double)_parallaxScaleFactor;
- (void)_prepareForEditing;
- (void)_removeAllSubviewsFrom:(id)arg1;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (id)_selectedContentView;
- (bool)_shouldAdjustLayoutForTimeTravel;
- (bool)_shouldFadeToTransitionView;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (bool)_timeLabelUsesLegibility;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (id)_updateFontInStyle:(id)arg1 monospace:(bool)arg2;
- (id)_viewForEditOption:(id)arg1;
- (id)backgroundContainerView;
- (id)borrowedCircleView;
- (id)borrowedTimeView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskZoomStartingBounds;
- (void)setBorrowedCircleView:(id)arg1;
- (void)setBorrowedTimeView:(id)arg1;
- (void)setMaskZoomStartingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTimeViewZoomEndingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewMode:(long long)arg1;
- (void)setVignetteZoomStartingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomMaskView:(id)arg1;
- (void)setZoomVignette:(id)arg1;
- (struct CGPoint { double x1; double x2; })timeViewZoomEndingCenter;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vignetteZoomStartingBounds;
- (id)zoomMaskView;
- (id)zoomVignette;

@end
