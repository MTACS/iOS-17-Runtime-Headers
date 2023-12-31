
@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {
    double  _cornerRadius;
    UIColor * _fillColor;
    struct { 
        unsigned int enabled : 1; 
        unsigned int hasFlexibleCornerRadius : 1; 
        unsigned int usesSinglePixelLineWidth : 1; 
    }  _flags;
    double  _lineWidth;
    UIColor * _strokeColor;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) bool hasFlexibleCornerRadius;
@property (nonatomic) double lineWidth;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) bool usesSinglePixelLineWidth;

- (void).cxx_destruct;
- (double)_cornerRadiusAdjustedForBoundsHeight;
- (id)_fillColor:(bool)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2 usesSinglePixelLineWidth:(bool)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2 usesSinglePixelLineWidth:(bool)arg3 updateView:(bool)arg4;
- (double)_screenScale;
- (id)_strokeColor:(bool)arg1;
- (double)cornerRadius;
- (id)fillColor;
- (bool)hasFlexibleCornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2;
- (void)layoutSubviews;
- (double)lineWidth;
- (void)setActive:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setFillColor:(id)arg1;
- (void)setHasFlexibleCornerRadius:(bool)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setUsesSinglePixelLineWidth:(bool)arg1;
- (id)strokeColor;
- (void)updateView;
- (bool)usesSinglePixelLineWidth;

@end
