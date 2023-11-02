
@interface SSReduceTransparencyFlashView : SSFlashView {
    UIView * _colorView;
    id /* block */  _oldCompletionBlock;
}

+ (double)expectedAnimationDurationForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)flashWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
