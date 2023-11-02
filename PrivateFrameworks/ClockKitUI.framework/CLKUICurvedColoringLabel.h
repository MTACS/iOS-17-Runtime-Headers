
@interface CLKUICurvedColoringLabel : CLKUIColoringLabel {
    CLKUICurvedLabel * _curvedLabel;
}

@property (nonatomic) double centerAngle;
@property (nonatomic) double circleRadius;
@property (nonatomic) double imagePadding;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) UIView *imageView;
@property (nonatomic) struct CGSize { double x1; double x2; } imageViewOverrideSize;
@property (nonatomic) bool interior;
@property (nonatomic) double maxAngularWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textBoundingRect;

- (void).cxx_destruct;
- (double)_firstLineBaseline;
- (double)_lastLineBaseline;
- (void)_setAnimationAlpha:(double)arg1;
- (void)_setUpSnapshot;
- (double)alpha;
- (id)attributedText;
- (double)centerAngle;
- (struct CGPoint { double x1; double x2; })centerForImage;
- (double)circleRadius;
- (id)color;
- (id)font;
- (void)getTextCenter:(struct CGPoint { double x1; double x2; }*)arg1 startAngle:(double*)arg2 endAngle:(double*)arg3;
- (double)imagePadding;
- (unsigned long long)imagePlacement;
- (id)imageView;
- (struct CGSize { double x1; double x2; })imageViewOverrideSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)interior;
- (void)invalidateCachedSize;
- (bool)isTextTruncated;
- (void)layoutSubviews;
- (double)maxAngularWidth;
- (double)maxWidth;
- (long long)numberOfLines;
- (void)setAlpha:(double)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenterAngle:(double)arg1;
- (void)setCircleRadius:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImagePadding:(double)arg1;
- (void)setImagePlacement:(unsigned long long)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageView:(id)arg1 placement:(unsigned long long)arg2 padding:(double)arg3;
- (void)setImageViewOverrideSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInterior:(bool)arg1;
- (void)setMaxAngularWidth:(double)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextProviderFont:(id)arg1;
- (void)setTracking:(double)arg1;
- (void)setUsesTextProviderTintColoring:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)text;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoundingRect;
- (id)textColor;
- (bool)textDefinesTruncation;
- (id)textProviderFont;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImage;

@end
