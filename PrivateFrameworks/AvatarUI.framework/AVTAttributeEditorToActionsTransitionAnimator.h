
@interface AVTAttributeEditorToActionsTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _RTL;
    <AVTViewLayoutInfo> * _avtViewLayoutInfo;
    AVTUIEnvironment * _environment;
    double  _userInfoViewHeight;
}

@property (nonatomic, readonly) bool RTL;
@property (nonatomic, readonly) <AVTViewLayoutInfo> *avtViewLayoutInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double userInfoViewHeight;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })adjustedSafeAreaInsetsForView:(id)arg1;

- (void).cxx_destruct;
- (bool)RTL;
- (void)animateTransition:(id)arg1;
- (id)avtViewLayoutInfo;
- (id)environment;
- (id)initWithAVTViewLayoutInfo:(id)arg1 userInfoViewHeight:(double)arg2 RTL:(bool)arg3 environment:(id)arg4;
- (double)transitionDuration:(id)arg1;
- (double)userInfoViewHeight;

@end
