
@interface SBHWidgetConfigurationFlipAnimator : NSObject <SBHViewControllerTransitionAnimating, SBIconViewObserver> {
    long long  _currentEndpoint;
    double  _endingFlipFraction;
    double  _endingRotationAngle;
    UIViewFloatAnimatableProperty * _flipAnimatableProperty;
    bool  _hasPerformedAnyTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _homeScreenContentFrame;
    SBFTouchPassThroughView * _matchMoveView;
    SBHWidgetConfigurationTransformView * _sourceContainerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceContentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceContentFrameInMatchMoveViewSpace;
    double  _startingFlipFraction;
    double  _startingRotationAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetContentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetContentFrameInMatchMoveViewSpace;
    UIView * _targetSuperview;
    SBHWidgetSettings * _widgetSettings;
}

@property (nonatomic) long long currentEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endingFlipFraction;
@property (nonatomic) double endingRotationAngle;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *flipAnimatableProperty;
@property (nonatomic) bool hasPerformedAnyTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } homeScreenContentFrame;
@property (nonatomic, retain) SBFTouchPassThroughView *matchMoveView;
@property (nonatomic, retain) SBHWidgetConfigurationTransformView *sourceContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceContentFrameInMatchMoveViewSpace;
@property (nonatomic) double startingFlipFraction;
@property (nonatomic) double startingRotationAngle;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetContentFrameInMatchMoveViewSpace;
@property (nonatomic, retain) UIView *targetSuperview;
@property (nonatomic, readonly) SBHWidgetSettings *widgetSettings;

- (void).cxx_destruct;
- (void)_configureForEndpoint:(long long)arg1 context:(id)arg2 inMode:(long long)arg3 completion:(id /* block */)arg4;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (long long)currentEndpoint;
- (void)dealloc;
- (double)endingFlipFraction;
- (double)endingRotationAngle;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)flipAnimatableProperty;
- (bool)hasPerformedAnyTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })homeScreenContentFrame;
- (void)iconViewDidBecomeWindowless:(id)arg1;
- (void)iconViewWasDiscarded:(id)arg1;
- (void)iconViewWasRecycled:(id)arg1;
- (id)init;
- (id)matchMoveView;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)setCurrentEndpoint:(long long)arg1;
- (void)setEndingFlipFraction:(double)arg1;
- (void)setEndingRotationAngle:(double)arg1;
- (void)setFlipAnimatableProperty:(id)arg1;
- (void)setHasPerformedAnyTransition:(bool)arg1;
- (void)setHomeScreenContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMatchMoveView:(id)arg1;
- (void)setSourceContainerView:(id)arg1;
- (void)setSourceContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceContentFrameInMatchMoveViewSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartingFlipFraction:(double)arg1;
- (void)setStartingRotationAngle:(double)arg1;
- (void)setTargetContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetContentFrameInMatchMoveViewSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetSuperview:(id)arg1;
- (id)sourceContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrameInMatchMoveViewSpace;
- (double)startingFlipFraction;
- (double)startingRotationAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentFrameInMatchMoveViewSpace;
- (id)targetSuperview;
- (id)widgetSettings;

@end
