
@interface _UIWindowSceneActivationAnimator : NSObject {
    NSMutableArray * _alongsideAnimations;
    NSMutableArray * _alongsideCompletions;
    UIWindowSceneActivationConfiguration * _configuration;
    bool  _deparented;
    UIView * _deparentingPortalAlphaSourceView;
    UIView * _deparentingWrapper;
    struct UIRectCornerRadii { 
        double topLeft; 
        double bottomLeft; 
        double bottomRight; 
        double topRight; 
    }  _expectedCornerRadii;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _expectedFrame;
    CAMatchMoveAnimation * _incomingSceneAnchorAnimation;
    _UIPortalView * _incomingScenePortalView;
    bool  _isDeallocating;
    UIView * _morphContainerView;
    long long  _state;
}

@property (nonatomic, readonly) NSMutableArray *alongsideAnimations;
@property (nonatomic, readonly) NSMutableArray *alongsideCompletions;
@property (nonatomic, retain) UIWindowSceneActivationConfiguration *configuration;
@property (nonatomic) bool deparented;
@property (nonatomic, retain) UIView *deparentingPortalAlphaSourceView;
@property (nonatomic, retain) UIView *deparentingWrapper;
@property (nonatomic) struct UIRectCornerRadii { double x1; double x2; double x3; double x4; } expectedCornerRadii;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } expectedFrame;
@property (nonatomic, retain) CAMatchMoveAnimation *incomingSceneAnchorAnimation;
@property (nonatomic, retain) _UIPortalView *incomingScenePortalView;
@property (nonatomic) bool isDeallocating;
@property (nonatomic, retain) UIView *morphContainerView;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_performAllAlongsideAnimations:(id)arg1;
- (void)_performAllAlongsideCompletions;
- (long long)_preferredCollapsedShadowStyle;
- (id)_previewForIncomingScenePortal;
- (void)_sendBSAction:(id)arg1;
- (void)_sendCompletionActionCallingAlongsideCompletions:(bool)arg1;
- (id)_sourceViewContainer;
- (double)_startingShadowIntensity;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)alongsideAnimations;
- (id)alongsideCompletions;
- (bool)animateWithSourcePreview:(id)arg1 velocity:(double)arg2;
- (void)cancel;
- (id)configuration;
- (void)dealloc;
- (void)deparent;
- (bool)deparented;
- (id)deparentingPortalAlphaSourceView;
- (id)deparentingWrapper;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })expectedCornerRadii;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expectedFrame;
- (id)incomingSceneAnchorAnimation;
- (id)incomingScenePortalView;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDeallocating;
- (id)morphContainerView;
- (void)prewarmWithCompletion:(id /* block */)arg1;
- (void)reparent;
- (void)setConfiguration:(id)arg1;
- (void)setDeparented:(bool)arg1;
- (void)setDeparentingPortalAlphaSourceView:(id)arg1;
- (void)setDeparentingWrapper:(id)arg1;
- (void)setExpectedCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setExpectedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIncomingSceneAnchorAnimation:(id)arg1;
- (void)setIncomingScenePortalView:(id)arg1;
- (void)setIsDeallocating:(bool)arg1;
- (void)setMorphContainerView:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
