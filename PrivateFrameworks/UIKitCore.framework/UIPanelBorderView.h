
@interface UIPanelBorderView : UIView {
    NSString * _backdropGroupName;
    bool  _draggable;
    bool  _observesTime;
    UIPanelBorderReplicatingView * _replicatingView;
    long long  _statusBarAvoidance;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (getter=isDraggable, nonatomic) bool draggable;
@property (nonatomic) bool observesTime;
@property (nonatomic, retain) UIPanelBorderReplicatingView *replicatingView;
@property (nonatomic) long long statusBarAvoidance;

- (void).cxx_destruct;
- (id)_cachedBackdropGroupName;
- (id)backdropGroupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDraggable;
- (void)layoutSubviews;
- (bool)observesTime;
- (id)replicatingView;
- (void)setBackdropGroupName:(id)arg1;
- (void)setDraggable:(bool)arg1;
- (void)setObservesTime:(bool)arg1;
- (void)setReplicatingView:(id)arg1;
- (void)setStatusBarAvoidance:(long long)arg1;
- (long long)statusBarAvoidance;

@end
