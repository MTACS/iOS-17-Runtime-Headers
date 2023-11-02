
@interface SBIconLabelImage : UIImage {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    double  _baselineOffsetFromBottom;
    SBIconLabelImageParameters * _parameters;
}

@property (nonatomic, readonly, copy) SBIconLabelImageParameters *parameters;

+ (struct CGSize { double x1; double x2; })_maxLegibilityImageSizeForLabelSize:(struct CGSize { double x1; double x2; })arg1;
+ (void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (bool)attributedText:(id)arg1 fitsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
+ (id)imageWithParameters:(id)arg1;
+ (id)imageWithParameters:(id)arg1 pool:(id)arg2;
+ (double)legibilityStrengthForLegibilityStyle:(long long)arg1;
+ (bool)needsLegibilityImageForParameters:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 alignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 baselineOffsetFromBottom:(double)arg6;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (id)description;
- (bool)hasBaseline;
- (id)parameters;

@end
