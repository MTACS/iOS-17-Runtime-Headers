
@interface _UIImageSymbolBounceEffect : _UIImageSymbolEffect {
    long long  _bounceDirection;
    bool  _byLayer;
    _UIImageSymbolEffectRepeatBehavior * _repeatBehavior;
}

@property (nonatomic) long long bounceDirection;
@property (nonatomic) bool byLayer;
@property (nonatomic, retain) _UIImageSymbolEffectRepeatBehavior *repeatBehavior;

+ (id)effect;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (long long)bounceDirection;
- (bool)byLayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)repeatBehavior;
- (void)setBounceDirection:(long long)arg1;
- (void)setByLayer:(bool)arg1;
- (void)setRepeatBehavior:(id)arg1;

@end
