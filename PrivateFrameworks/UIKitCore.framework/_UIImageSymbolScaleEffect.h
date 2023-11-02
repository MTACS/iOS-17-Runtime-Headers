
@interface _UIImageSymbolScaleEffect : _UIImageSymbolEffect {
    bool  _byLayer;
    long long  _scale;
}

@property (nonatomic) bool byLayer;
@property (nonatomic) long long scale;

+ (id)effect;
+ (id)effectWithScale:(long long)arg1;
+ (id)scaleDefaultEffect;
+ (id)scaleDownEffect;
+ (id)scaleUpEffect;
+ (bool)supportsSecureCoding;

- (long long)_desiredScale;
- (bool)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (long long)_stateUpdateType;
- (bool)byLayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)scale;
- (void)setByLayer:(bool)arg1;
- (void)setScale:(long long)arg1;

@end
