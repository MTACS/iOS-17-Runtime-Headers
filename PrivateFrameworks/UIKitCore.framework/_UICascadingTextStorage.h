
@interface _UICascadingTextStorage : NSConcreteTextStorage {
    NSMutableDictionary * _defaultAttributes;
    <_UITextAttributeDefaults> * _defaults;
}

@property (setter=_setDefaults:, nonatomic, retain) <_UITextAttributeDefaults> *_defaults;
@property (nonatomic, copy) NSDictionary *defaultAttributes;
@property (nonatomic) long long defaultBaseWritingDirection;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double shadowBlur;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

+ (id)defaultFont;

- (void).cxx_destruct;
- (id)_defaultAttributes;
- (id)_defaults;
- (void)_restoreOriginalFontAttribute;
- (void)_setDefaults:(id)arg1;
- (void)_setShadow:(id)arg1;
- (id)_shadow;
- (bool)_shouldSetOriginalFontAttribute;
- (long long)_ui_resolvedTextAlignment;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)defaultAttributes;
- (long long)defaultBaseWritingDirection;
- (id)font;
- (id)init;
- (id)initWithDefaults:(id)arg1;
- (long long)lineBreakMode;
- (void)setDefaultAttributes:(id)arg1;
- (void)setDefaultBaseWritingDirection:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (long long)textAlignment;
- (id)textColor;

@end
