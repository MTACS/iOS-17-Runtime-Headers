
@interface CKLargeHitButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _ck_hitTestInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } ck_hitTestInsets;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })ck_hitTestInsets;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCk_hitTestInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
