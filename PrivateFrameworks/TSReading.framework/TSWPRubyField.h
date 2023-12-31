
@interface TSWPRubyField : TSWPSmartField {
    NSString * _rubyText;
}

@property (nonatomic, readonly) NSString *baseText;
@property (nonatomic, readonly) int baseTextScript;
@property (nonatomic, copy) NSString *rubyText;

- (bool)allowsEditing;
- (unsigned int)attributeArrayKind;
- (id)baseText;
- (int)baseTextScript;
- (bool)canCopy:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;
- (id)rubyText;
- (void)setRubyText:(id)arg1;
- (int)styleAttributeArrayKind;
- (id)text;

@end
