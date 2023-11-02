
@interface CKEntryViewBlurrableButtonContainer : UIView {
    double  _blurRadius;
}

@property (nonatomic) double blurRadius;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)blurRadius;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (void)setBlurRadius:(double)arg1;

@end
