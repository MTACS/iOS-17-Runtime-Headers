
@interface _UITextAttributeDefaults : NSObject <NSCopying, _UITextAttributeDefaults> {
    _UIMutableTextAttributeDictionary * _attributes;
}

@property (nonatomic, readonly, copy) _UITextAttributeDictionary *_attributes;
@property (setter=_setFont:, nonatomic, retain) UIFont *_font;
@property (setter=_setParagraphStyle:, nonatomic, retain) NSParagraphStyle *_paragraphStyle;
@property (setter=_setShadow:, nonatomic, retain) NSShadow *_shadow;
@property (setter=_setTextColor:, nonatomic, retain) UIColor *_textColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_defaultsForUserInterfaceIdiom:(long long)arg1;
+ (void)_getFontSizesForUserInterfaceIdiom:(long long)arg1 labelFontSize:(double*)arg2 buttonFontSize:(double*)arg3 systemFontSize:(double*)arg4 smallSystemFontSize:(double*)arg5;
+ (id)_unspecifiedDefaults;

- (void).cxx_destruct;
- (id)_attributes;
- (id)_font;
- (id)_init;
- (id)_initWithFallback:(id)arg1;
- (id)_paragraphStyle;
- (void)_setFont:(id)arg1;
- (void)_setParagraphStyle:(id)arg1;
- (void)_setShadow:(id)arg1;
- (void)_setTextColor:(id)arg1;
- (id)_shadow;
- (id)_textColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
