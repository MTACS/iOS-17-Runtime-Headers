
@interface _UIPhysicalKeyTranslationMap : NSObject {
    unsigned int  _keyAction;
    unsigned int  _keyCode;
    long long  _originalModifiers;
    NSMapTable * _translationMap;
}

@property (readonly) unsigned int keyAction;
@property (readonly) unsigned int keyCode;
@property (readonly) long long originalModifiers;
@property (nonatomic, readonly) NSMapTable *translationMap;

+ (void)enumerateAllCombinationsOfModifiers:(long long)arg1 staticModifiers:(long long)arg2 usingBlock:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allTranslations;
- (bool)areModifiers:(long long)arg1 minimalExcessOfMask:(long long)arg2 matching:(id)arg3 translator:(id)arg4 matchedModifierSubset:(long long*)arg5 betterMatchFound:(bool*)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyCode:(unsigned short)arg1 action:(unsigned int)arg2 modifiers:(long long)arg3;
- (unsigned int)keyAction;
- (unsigned int)keyCode;
- (bool)keyTranslation:(id*)arg1 withModifiers:(long long)arg2;
- (id)keyTranslationWithModifiers:(long long)arg1 translator:(id)arg2;
- (long long)originalModifiers;
- (void)populateAllCombinationsOfModifiers:(long long)arg1 translator:(id)arg2;
- (void)setKeyTranslation:(id)arg1 modifiers:(long long)arg2;
- (id)translationMap;

@end
