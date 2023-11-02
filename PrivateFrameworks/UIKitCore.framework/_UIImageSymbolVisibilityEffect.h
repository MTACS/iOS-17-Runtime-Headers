
@interface _UIImageSymbolVisibilityEffect : _UIImageSymbolEffect {
    bool  _byLayer;
    long long  _style;
    long long  _visibility;
}

@property (nonatomic) bool byLayer;
@property (nonatomic) long long style;
@property (nonatomic) long long visibility;

+ (id)appearEffect;
+ (id)disappearEffect;
+ (id)effect;
+ (id)effectWithVisibility:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)_desiredVisibility;
- (bool)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (long long)_stateUpdateType;
- (bool)byLayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setByLayer:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVisibility:(long long)arg1;
- (long long)style;
- (long long)visibility;

@end
