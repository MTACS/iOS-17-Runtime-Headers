
@interface _PXVisualDiagnosticsDrawTextConfiguration : NSObject <PXVisualDiagnosticsDrawTextConfiguration> {
    NSAttributedString * _attributedText;
    UIColor * _backgroundColor;
    UIFont * _font;
    double  _fontSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _relativePosition;
    NSString * _text;
    UIColor * _textColor;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } relativePosition;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (id)attributedText;
- (id)backgroundColor;
- (id)font;
- (double)fontSize;
- (id)init;
- (struct CGPoint { double x1; double x2; })relativePosition;
- (void)setAttributedText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setRelativePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (id)textColor;

@end
