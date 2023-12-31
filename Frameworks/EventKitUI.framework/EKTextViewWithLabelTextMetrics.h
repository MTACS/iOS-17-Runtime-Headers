
@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics> {
    long long  lineBreakMode;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setURL:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2;

@end
