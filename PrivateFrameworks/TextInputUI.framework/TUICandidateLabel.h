
@interface TUICandidateLabel : UIView {
    bool  _adjustsFontSizeToFitWidth;
    UIFont * _font;
    long long  _layoutOrientation;
    long long  _lineBreakMode;
    double  _minimumScaleFactor;
    NSString * _text;
    UIColor * _textColor;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

+ (double)lineWidthForText:(id)arg1 font:(id)arg2 layoutOrientation:(long long)arg3;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)adjustsFontSizeToFitWidth;
- (void)commonInit;
- (struct __CTLine { }*)createLineFromAttributedText:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutOrientation;
- (long long)lineBreakMode;
- (unsigned int)lineTruncationType;
- (double)minimumScaleFactor;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (id)textColor;

@end
