
@interface SBIconDotLabelAccessoryView : SBIconLabelAccessoryView {
    UIImageView * _imageView;
}

+ (id)_cachedDotImage;
+ (id)_dotColor;
+ (void)_setCachedDotImage:(id)arg1;
+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_vibrantColorMatrixInput;
+ (id)labelAccessorySystemImageName;

- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)lastBaselineAnchor;
- (void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2;

@end
