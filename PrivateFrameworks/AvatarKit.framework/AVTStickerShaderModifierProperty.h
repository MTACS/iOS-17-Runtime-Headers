
@interface AVTStickerShaderModifierProperty : NSObject {
    id  _effectiveValue;
    NSString * _name;
    id  _originalValue;
    NSString * _type;
    id  _value;
}

@property (nonatomic, readonly) id effectiveValue;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) id originalValue;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) id value;

+ (id)shaderModifierPropertyCache;
+ (id)shaderModifierPropertyFromDictionary:(id)arg1 assetsPath:(id)arg2;

- (void).cxx_destruct;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)effectiveValue;
- (id)initWithName:(id)arg1 type:(id)arg2 value:(id)arg3 originalValue:(id)arg4;
- (id)name;
- (id)originalValue;
- (void)setOriginalValue:(id)arg1;
- (id)type;
- (id)value;

@end
