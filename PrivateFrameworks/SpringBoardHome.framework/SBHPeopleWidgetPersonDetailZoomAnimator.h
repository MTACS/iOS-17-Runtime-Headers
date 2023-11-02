
@interface SBHPeopleWidgetPersonDetailZoomAnimator : NSObject <SBHViewControllerTransitionAnimating> {
    long long  _currentEndpoint;
    SBFTouchPassThroughView * _matchMoveView;
    SBHPeopleWidgetPersonDetailInteractionSettings * _settings;
    SBFTouchPassThroughView * _sourceContainerView;
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
}

@property (nonatomic) long long currentEndpoint;
@property (nonatomic, retain) SBFTouchPassThroughView *matchMoveView;
@property (nonatomic, readonly) SBHPeopleWidgetPersonDetailInteractionSettings *settings;
@property (nonatomic, retain) SBFTouchPassThroughView *sourceContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceContentFrameInMatchMoveViewSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetContentFrameInMatchMoveViewSpace;

- (void).cxx_destruct;
- (void)_configureForEndpoint:(long long)arg1 context:(id)arg2 inMode:(long long)arg3 completion:(id /* block */)arg4;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (long long)currentEndpoint;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)init;
- (id)matchMoveView;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)setCurrentEndpoint:(long long)arg1;
- (void)setMatchMoveView:(id)arg1;
- (void)setSourceContainerView:(id)arg1;
- (void)setSourceContentFrameInMatchMoveViewSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetContentFrameInMatchMoveViewSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)settings;
- (id)sourceContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrameInMatchMoveViewSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentFrameInMatchMoveViewSpace;

@end
