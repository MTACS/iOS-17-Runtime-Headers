
@interface AVPictureInPictureIndicatorSublayer : CALayer {
    NSAttributedString * _attributedText;
    double  _baselineOffset;
    NSString * _customText;
    CALayer * _imageLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _languageAwareOutsets;
    double  _lineHeight;
    CATextLayer * _textLayer;
}

@property (nonatomic, copy) NSString *customText;

- (void).cxx_destruct;
- (bool)canRenderAttributedTextWithoutTruncationInsideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)customText;
- (id)init;
- (id)initWithDisplayScale:(double)arg1 placeholderImage:(struct CGImage { }*)arg2 opaque:(bool)arg3;
- (void)layoutSublayers;
- (void)layoutSublayersWithTextAndImageUsingInsetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomText:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoundingRectWhenDrawnInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
