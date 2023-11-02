
@interface CACContextAdaptiveBackdropView : UIView {
    UIView * _tintView;
}

@property (nonatomic, retain) UIView *tintView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setTintView:(id)arg1;
- (id)tintView;

@end
