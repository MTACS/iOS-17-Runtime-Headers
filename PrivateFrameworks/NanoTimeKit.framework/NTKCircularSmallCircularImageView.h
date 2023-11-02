
@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView {
    UIView<CDComplicationImageView> * _imageView;
}

@property (nonatomic, retain) UIView<CDComplicationImageView> *imageView;

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImageView:(id)arg1;
- (void)setUsesMediumLayout:(bool)arg1;

@end
