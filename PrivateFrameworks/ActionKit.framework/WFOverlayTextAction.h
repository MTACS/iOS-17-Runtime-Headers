
@interface WFOverlayTextAction : WFAction {
    double  _imageHeight;
    double  _imageWidth;
}

@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;

- (double)boxWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForImage:(id)arg1;
- (id)font;
- (id)fontDescriptor;
- (double)fontSize;
- (double)imageHeight;
- (double)imageWidth;
- (double)offset;
- (id)outlinedTextAttributes;
- (void)overlayImage:(id)arg1 inContext:(id)arg2;
- (id)paragraphStyle;
- (id)parameterKeysIgnoredForParameterSummary;
- (double)rotation;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setImageHeight:(double)arg1;
- (void)setImageWidth:(double)arg1;
- (id)strokeColor;
- (bool)strokeEnabled;
- (double)strokeWidth;
- (id)strokeWidthPercentage;
- (id)text;
- (long long)textAlignment;
- (id)textAttributes;
- (id)textColor;
- (id)textPosition;
- (bool)useProportionalSizing;
- (double)xPosition;
- (double)yPosition;

@end
