
@interface SKOverlayTransitionContext : NSObject {
    ASOOverlayTransitionContext * _backing;
}

@property (nonatomic, retain) ASOOverlayTransitionContext *backing;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startFrame;

- (void).cxx_destruct;
- (void)addAnimationBlock:(id /* block */)arg1;
- (id)backing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (id)initWithASOOverlayTransitionContext:(id)arg1;
- (void)setBacking:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startFrame;

@end
