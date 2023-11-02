
@interface SBFluidSwitcherContentView : UIView <SBSwitcherLayoutElementProviding, UIFocusItemScrollableContainer> {
    <SBFluidSwitcherContentViewDelegate> * _delegate;
    bool  _passesTouchesThrough;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFluidSwitcherContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool passesTouchesThrough;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } visibleSize;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)passesTouchesThrough;
- (id)preferredFocusEnvironments;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setPassesTouchesThrough:(bool)arg1;
- (unsigned long long)switcherLayoutElementType;
- (struct CGSize { double x1; double x2; })visibleSize;

@end
