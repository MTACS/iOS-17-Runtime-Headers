
@interface NSSymbolBounceEffect : NSSymbolEffect {
    long long  _direction;
    long long  _layerBehavior;
}

@property (nonatomic) long long _direction;
@property (nonatomic) long long _layerBehavior;

+ (id)bounceDownEffect;
+ (id)bounceUpEffect;
+ (id)effect;

- (long long)_direction;
- (long long)_layerBehavior;
- (id)_rbOptionsMutable;
- (id)_withDirection:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (void)set_direction:(long long)arg1;
- (void)set_layerBehavior:(long long)arg1;

@end
