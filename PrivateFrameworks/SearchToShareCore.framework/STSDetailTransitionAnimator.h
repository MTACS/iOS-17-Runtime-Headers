
@interface STSDetailTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentedFrame;
    bool  _presenting;
    UIView * _snapshotView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sourceInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentedFrame;
@property (nonatomic) bool presenting;
@property (nonatomic, retain) UIView *snapshotView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sourceInsets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedFrame;
- (bool)presenting;
- (void)setPresentedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresenting:(bool)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)snapshotView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sourceInsets;
- (double)transitionDuration:(id)arg1;

@end
