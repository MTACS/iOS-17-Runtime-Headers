
@interface PRXTextStyleDefinition : NSObject {
    unsigned long long  _accessibilityTraits;
    UIFont * _font;
    long long  _numberOfLines;
    long long  _style;
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (nonatomic, readonly) unsigned long long accessibilityTraits;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) long long numberOfLines;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) UIColor *textColor;

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)font;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfLines;
- (long long)style;
- (long long)textAlignment;
- (id)textColor;

@end
