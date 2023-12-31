
@interface HKAdjustableTapTargetButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTargetInsets;
    bool  _insetSet;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTargetInsets;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTargetInsets;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitTargetInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
