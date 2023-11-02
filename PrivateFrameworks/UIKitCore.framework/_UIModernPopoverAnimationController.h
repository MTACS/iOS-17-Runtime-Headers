
@interface _UIModernPopoverAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIPopoverPresentationController * _popoverPresentationController;
    bool  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIPopoverPresentationController *popoverPresentationController;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_anchorPointForArrowDirection:(unsigned long long)arg1 arrowOfset:(double)arg2 popoverSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })_arrowPointForPopoverSize:(struct CGSize { double x1; double x2; })arg1 arrowOffset:(double)arg2 arrowDirection:(unsigned long long)arg3;
- (void)animateTransition:(id)arg1;
- (bool)isPresenting;
- (id)popoverPresentationController;
- (void)setPopoverPresentationController:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
