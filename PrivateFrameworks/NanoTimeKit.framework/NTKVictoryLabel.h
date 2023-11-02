
@interface NTKVictoryLabel : CLKUIColoringLabel {
    double  _additionalPaddingInsets;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _drawingRectOffset;
    double  _outlineAlpha;
    UIColor * _outlineColor;
    NTKVictoryLabel * _outlineLabel;
    bool  _requiresDrawingRectAdjustments;
}

@property (nonatomic) double additionalPaddingInsets;
@property (nonatomic) struct CGVector { double x1; double x2; } drawingRectOffset;
@property (nonatomic) double outlineAlpha;
@property (nonatomic, retain) UIColor *outlineColor;
@property (nonatomic, retain) NTKVictoryLabel *outlineLabel;
@property (nonatomic) bool requiresDrawingRectAdjustments;

+ (id)fontDescriptorWithVictoryStyle:(unsigned long long)arg1;
+ (id)loadFonts:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(bool)arg3;
+ (id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2;
+ (id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(bool)arg3;

- (void).cxx_destruct;
- (void)_applyDrawingOffsetForTextIfNeeded:(id)arg1;
- (void)_layoutOutlineLabelIfNeeded;
- (bool)_shouldHideOutlineLabel;
- (double)additionalPaddingInsets;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGVector { double x1; double x2; })drawingRectOffset;
- (void)layoutSubviews;
- (double)outlineAlpha;
- (id)outlineColor;
- (id)outlineLabel;
- (id)outlinedLabelAttributedStringFromAttributedString:(id)arg1;
- (bool)requiresDrawingRectAdjustments;
- (void)setAdditionalPaddingInsets:(double)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setDrawingRectOffset:(struct CGVector { double x1; double x2; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillColor:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setOutlineAlpha:(double)arg1;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineColor:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setOutlineLabel:(id)arg1;
- (void)setRequiresDrawingRectAdjustments:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;

@end
