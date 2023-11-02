
@interface ICDocCamRecropTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id /* block */  _completion;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerViewFrame;
    double  _duration;
    UIImage * _filteredImage;
    NSIndexPath * _indexPath;
    long long  _orientation;
    bool  _presenting;
    ICDocCamImageQuad * _quadForOverlay;
    UIView * _startView;
    UIImage * _unfilteredImage;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerViewFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIImage *filteredImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic) long long orientation;
@property (nonatomic) bool presenting;
@property (nonatomic, retain) ICDocCamImageQuad *quadForOverlay;
@property (nonatomic) UIView *startView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *unfilteredImage;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id /* block */)completion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewFrame;
- (double)duration;
- (id)filteredImage;
- (id)imageMeshTransform:(bool)arg1;
- (id)indexPath;
- (id)initWithImage:(id)arg1 unfilteredImage:(id)arg2 orientation:(long long)arg3 indexPath:(id)arg4 duration:(double)arg5 completion:(id /* block */)arg6;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })matrixTransformingQuadForOverlayToImageView:(bool*)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })matrixTransformingToUnitSquareWithPoints:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 x2:(double)arg5 y2:(double)arg6 x3:(double)arg7 y3:(double)arg8;
- (long long)orientation;
- (void)performPopTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)performPushTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)performSimpleFadeInFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (bool)presenting;
- (id)quadForOverlay;
- (id)scrollViewTransform:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContainerViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDuration:(double)arg1;
- (void)setFilteredImage:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setQuadForOverlay:(id)arg1;
- (void)setStartView:(id)arg1;
- (void)setUnfilteredImage:(id)arg1;
- (void)sortPoints:(struct CGPoint { double x1; double x2; }*)arg1 sorted:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)startView;
- (double)transitionDuration:(id)arg1;
- (id)unfilteredImage;

@end
