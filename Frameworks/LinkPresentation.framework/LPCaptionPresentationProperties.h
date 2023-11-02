
@interface LPCaptionPresentationProperties : NSObject {
    NSAttributedString * _attributedText;
    UIColor * _color;
    NSNumber * _maximumNumberOfLines;
    NSString * _text;
    double  _textScale;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSNumber *maximumNumberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) double textScale;

- (void).cxx_destruct;
- (id)attributedText;
- (id)color;
- (id)init;
- (id)maximumNumberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setMaximumNumberOfLines:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextScale:(double)arg1;
- (id)text;
- (double)textScale;

@end
