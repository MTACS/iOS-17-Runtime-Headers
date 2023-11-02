
@interface _UIImageSymbolVariableColorEffect : _UIImageSymbolEffect {
    _UIImageSymbolEffectRepeatBehavior * _repeatBehavior;
    long long  _styleOptions;
}

@property (nonatomic, retain) _UIImageSymbolEffectRepeatBehavior *repeatBehavior;
@property (nonatomic) long long styleOptions;

+ (id)effect;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)repeatBehavior;
- (void)setRepeatBehavior:(id)arg1;
- (void)setStyleOptions:(long long)arg1;
- (long long)styleOptions;

@end
