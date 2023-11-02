
@interface SFCapsuleInputAccessorySpacerView : UIView {
    double  _capsuleHeight;
}

@property (nonatomic) double capsuleHeight;

- (double)capsuleHeight;
- (id)initWithCapsuleView:(id)arg1 initialWidth:(double)arg2;
- (void)setCapsuleHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
