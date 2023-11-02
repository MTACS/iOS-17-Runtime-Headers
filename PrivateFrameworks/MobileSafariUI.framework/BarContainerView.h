
@interface BarContainerView : UIView {
    NSMutableSet * _barViews;
}

@property (nonatomic, readonly, copy) NSSet *barViews;

- (void).cxx_destruct;
- (id)barViews;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)registerBarView:(id)arg1;
- (void)unregisterBarView:(id)arg1;

@end
