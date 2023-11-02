
@interface UISPasteVariant : NSObject {
    NSString * _actionIdentifier;
    NSString * _glyph;
    NSString * _keyInput;
    long long  _keyModifierFlags;
    unsigned int  _secureName;
    SEL  _selector;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *glyph;
@property (nonatomic, readonly) NSString *keyInput;
@property (nonatomic, readonly) long long keyModifierFlags;
@property (nonatomic, readonly) unsigned int secureName;
@property (nonatomic, readonly) SEL selector;

+ (id)allVariants;
+ (id)variantForActionIdentifier:(id)arg1;
+ (id)variantForSecureName:(unsigned int)arg1;
+ (id)variantForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)glyph;
- (id)initWithSecureName:(unsigned int)arg1 selector:(SEL)arg2 actionIdentifier:(id)arg3 glpyh:(id)arg4 keyInput:(id)arg5 keyModifierFlags:(long long)arg6;
- (id)keyInput;
- (long long)keyModifierFlags;
- (id)localizedStringForLocalization:(id)arg1;
- (unsigned int)secureName;
- (SEL)selector;

@end
