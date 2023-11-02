
@protocol PXMutablePointAnimator

@required

- (void)setValue:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })value;
- (PXNumberAnimator<PXMutableNumberAnimator> *)xAnimator;
- (PXNumberAnimator<PXMutableNumberAnimator> *)yAnimator;

@end
