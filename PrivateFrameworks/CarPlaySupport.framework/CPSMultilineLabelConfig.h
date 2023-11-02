
@interface CPSMultilineLabelConfig : NSObject <NSCopying> {
    NSAttributedString * _attributedText;
    UIFont * _font;
    unsigned long long  _lineCount;
    NSString * _text;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) unsigned long long lineCount;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)font;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabelConfig:(id)arg1;
- (unsigned long long)lineCount;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineCount:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
