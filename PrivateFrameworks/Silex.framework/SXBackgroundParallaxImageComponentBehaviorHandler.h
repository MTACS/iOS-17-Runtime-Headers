
@interface SXBackgroundParallaxImageComponentBehaviorHandler : SXComponentBehaviorHandler {
    double  _amplitude;
    UIView * _clippingView;
    double  _originalYCenter;
    unsigned long long  _viewHierarchyIndex;
    UIView * _windowedScrollContentView;
}

@property (nonatomic, readonly) double amplitude;
@property (nonatomic, retain) UIView *clippingView;
@property (nonatomic) double originalYCenter;
@property (nonatomic) unsigned long long viewHierarchyIndex;
@property (nonatomic, retain) UIView *windowedScrollContentView;

- (void).cxx_destruct;
- (double)amplitude;
- (id)clippingView;
- (void)destroyWindowedScroll;
- (void)destroyWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (double)originalYCenter;
- (void)setClippingView:(id)arg1;
- (void)setOriginalYCenter:(double)arg1;
- (void)setViewHierarchyIndex:(unsigned long long)arg1;
- (void)setWindowedScrollContentView:(id)arg1;
- (void)setupWindowedScroll;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;
- (unsigned long long)viewHierarchyIndex;
- (id)windowedScrollContentView;

@end