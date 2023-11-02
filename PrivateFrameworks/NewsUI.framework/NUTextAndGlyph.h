
@interface NUTextAndGlyph : NSObject {
    unsigned long long  _alignment;
    NSAttributedString * _attributedText;
    UIImage * _glyph;
    NSString * _text;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic, readonly) UIImage *glyph;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (id)attributedText;
- (id)glyph;
- (id)init;
- (id)initWithAttributedText:(id)arg1 glyph:(id)arg2;
- (id)initWithAttributedText:(id)arg1 text:(id)arg2 glyph:(id)arg3;
- (id)initWithText:(id)arg1 glyph:(id)arg2;
- (void)setAlignment:(unsigned long long)arg1;
- (id)text;

@end
