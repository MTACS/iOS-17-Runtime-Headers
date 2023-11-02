
@interface AXUIFloatingViewPresenter : NSObject {
    unsigned long long  _alignedEdge;
    UIView * _containingView;
    <AXUIFloatingViewPresenterDelegate> * _delegate;
    NSArray * _edgeConstraints;
    UIView * _floatingView;
    bool  _withinSafeArea;
}

@property (nonatomic) unsigned long long alignedEdge;
@property (nonatomic, readonly) UIView *containingView;
@property (nonatomic) <AXUIFloatingViewPresenterDelegate> *delegate;
@property (nonatomic, retain) NSArray *edgeConstraints;
@property (nonatomic, retain) UIView *floatingView;
@property (nonatomic, readonly) bool withinSafeArea;

- (void).cxx_destruct;
- (void)_hideFloatingView;
- (void)_updateEdgeConstraints;
- (unsigned long long)alignedEdge;
- (id)containingView;
- (id)delegate;
- (void)dismissFloatingView;
- (id)edgeConstraints;
- (id)floatingView;
- (id)initWithContainingView:(id)arg1 alignedToEdge:(unsigned long long)arg2 withinSafeArea:(bool)arg3;
- (void)presentFloatingView:(id)arg1 withDuration:(double)arg2;
- (void)setAlignedEdge:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdgeConstraints:(id)arg1;
- (void)setFloatingView:(id)arg1;
- (bool)withinSafeArea;

@end
