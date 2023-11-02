
@interface TIKeyboardShortcut : NSObject {
    NSString * _displayStringOverride;
    NSString * _keyEquivalent;
    unsigned long long  _modifierFlags;
}

@property (nonatomic, retain) NSString *displayStringOverride;
@property (nonatomic, retain) NSString *keyEquivalent;
@property unsigned long long modifierFlags;

+ (id)findLocalizationForKeyboardShortcut:(id)arg1 withModifiers:(unsigned long long)arg2 inApplicableOverrides:(id)arg3 usingKeyboardType:(unsigned int)arg4;
+ (bool)isMirroringCandidate:(id)arg1;
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2;
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 usingKeyboardType:(unsigned int)arg3;
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 withAttributes:(id)arg3;
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayStringOverride;
- (unsigned long long)hash;
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyEquivalent;
- (unsigned long long)modifierFlags;
- (void)setDisplayStringOverride:(id)arg1;
- (void)setKeyEquivalent:(id)arg1;
- (void)setModifierFlags:(unsigned long long)arg1;

@end
