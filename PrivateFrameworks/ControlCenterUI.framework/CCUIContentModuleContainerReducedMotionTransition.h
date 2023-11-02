
@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _snapshotCorrectiveTransform;
    UIWindow * _snapshotHostWindow;
    UIView * _snapshotView;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } snapshotCorrectiveTransform;
@property (nonatomic) UIWindow *snapshotHostWindow;
@property (nonatomic, retain) UIView *snapshotView;

- (void).cxx_destruct;
- (id)customAnimator;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)setSnapshotCorrectiveTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSnapshotHostWindow:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })snapshotCorrectiveTransform;
- (id)snapshotHostWindow;
- (id)snapshotView;

@end
