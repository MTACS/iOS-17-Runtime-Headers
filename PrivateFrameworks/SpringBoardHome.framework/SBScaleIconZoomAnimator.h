
@interface SBScaleIconZoomAnimator : SBIconZoomAnimator {
    NSMutableArray * _animationCompletions;
    SBReversibleLayerPropertyAnimator * _homeScreenScaleAnimator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _iconScootch;
    double  _naturalVisualAltitude;
    UIView * _scalingView;
    SBIcon * _targetIcon;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetIconCenter;
    UIView * _targetIconPositioningView;
    SBReversibleLayerPropertyAnimator * _targetIconScaleXAnimator;
    SBReversibleLayerPropertyAnimator * _targetIconScaleYAnimator;
    SBIconView * _targetIconView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _zoomScaleDimension;
    struct CGPoint { 
        double x; 
        double y; 
    }  _zoomedTargetIconCenter;
}

@property (nonatomic, retain) NSMutableArray *animationCompletions;
@property (nonatomic, readonly) <SBScaleIconZoomAnimationContaining> *animationContainer;
@property (nonatomic, readonly) UIView *defaultTargetIconContainerView;
@property (nonatomic, readonly) bool fadesHomeScreen;
@property (nonatomic, retain) SBReversibleLayerPropertyAnimator *homeScreenScaleAnimator;
@property (nonatomic, readonly) double maxHomeScreenZoomScale;
@property (nonatomic, readonly) SBIconView *referenceIconView;
@property (nonatomic, retain) SBHScaleZoomSettings *settings;
@property (nonatomic, readonly) SBIcon *targetIcon;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } targetIconCenter;
@property (nonatomic, readonly) UIView *targetIconContainerView;
@property (nonatomic, readonly) UIView *targetIconPositioningView;
@property (nonatomic, retain) SBReversibleLayerPropertyAnimator *targetIconScaleXAnimator;
@property (nonatomic, retain) SBReversibleLayerPropertyAnimator *targetIconScaleYAnimator;
@property (nonatomic, readonly) SBIconView *targetIconView;
@property (nonatomic, readonly) double zoomScale;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } zoomScaleDimension;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } zoomedTargetIconCenter;

+ (bool)validateAnimationContainer:(id)arg1 targetIcon:(id)arg2;

- (void).cxx_destruct;
- (void)_applyIconGridFadeFraction:(double)arg1;
- (void)_applyVisualAltitudeFraction:(double)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (void)_cleanupAnimation;
- (void)_configureTargetIconPositioningView:(id)arg1;
- (bool)_forceSquareZoomDimension;
- (double)_homeScreenScaleForZoomFraction:(double)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(bool)arg4 sharedCompletion:(id /* block */)arg5;
- (void)_prepareAnimation;
- (struct CGPoint { double x1; double x2; })_referenceIconImageCenter;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setIconAlpha:(double)arg1;
- (void)_setZoomScale:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_targetIconScaleForZoomFraction:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_zoomedFrame;
- (struct CGPoint { double x1; double x2; })_zoomedIconCenter;
- (double)_zoomedVisualAltitude;
- (id)animationCompletions;
- (id)defaultTargetIconContainerView;
- (bool)fadesHomeScreen;
- (id)homeScreenScaleAnimator;
- (id)initWithAnimationContainer:(id)arg1 targetIcon:(id)arg2;
- (double)maxHomeScreenZoomScale;
- (id)referenceIconView;
- (void)setAnimationCompletions:(id)arg1;
- (void)setHomeScreenScaleAnimator:(id)arg1;
- (void)setTargetIconScaleXAnimator:(id)arg1;
- (void)setTargetIconScaleYAnimator:(id)arg1;
- (bool)shouldMatchMoveWithDock;
- (id)targetIcon;
- (struct CGPoint { double x1; double x2; })targetIconCenter;
- (id)targetIconContainerView;
- (id)targetIconPositioningView;
- (id)targetIconScaleXAnimator;
- (id)targetIconScaleYAnimator;
- (id)targetIconView;
- (double)zoomScale;
- (struct CGPoint { double x1; double x2; })zoomScaleDimension;
- (struct CGPoint { double x1; double x2; })zoomedTargetIconCenter;

@end
