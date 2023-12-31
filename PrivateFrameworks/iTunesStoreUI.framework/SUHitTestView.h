
@interface SUHitTestView : UIView {
    NSMutableArray * _hitTestTargets;
}

- (void)addHitTestTarget:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeHitTestTarget:(id)arg1;

@end
