
@protocol NCTextSupporting <NCTextMenuInteractionSupporting>

@required

- (UIFont *)font;
- (unsigned long long)nc_numberOfLines;
- (void)nc_setNumberOfLines:(unsigned long long)arg1;
- (void)setFont:(UIFont *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (NSString *)text;
- (UIColor *)textColor;
- (double)unui_drawingHeightWithNumberOfLines:(unsigned long long)arg1;
- (double)unui_measuringHeightWithNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)unui_numberOfLinesInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 maximum:(unsigned long long)arg2 drawingContext:(inout NSStringDrawingContext *)arg3;

@end
