
@interface _UIKeyShortcutHUDClientTraits : NSObject <NSSecureCoding> {
    bool  _globeKeyLabelHasGlobeSymbol;
    bool  _hasArabicHardwareKeyboard;
    long long  _layoutDirection;
    bool  _systemApp;
    long long  _userInterfaceStyle;
}

@property (nonatomic) bool globeKeyLabelHasGlobeSymbol;
@property (nonatomic) bool hasArabicHardwareKeyboard;
@property (nonatomic) long long layoutDirection;
@property (getter=isSystemApp, nonatomic) bool systemApp;
@property (nonatomic) long long userInterfaceStyle;

+ (bool)supportsSecureCoding;
+ (id)traitsWithReferenceTraitEnvironment:(id)arg1 referenceKeyboardEvent:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (bool)globeKeyLabelHasGlobeSymbol;
- (bool)hasArabicHardwareKeyboard;
- (id)initWithCoder:(id)arg1;
- (bool)isSystemApp;
- (long long)layoutDirection;
- (void)setGlobeKeyLabelHasGlobeSymbol:(bool)arg1;
- (void)setHasArabicHardwareKeyboard:(bool)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setSystemApp:(bool)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (long long)userInterfaceStyle;

@end
