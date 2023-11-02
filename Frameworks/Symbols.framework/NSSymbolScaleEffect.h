
@interface NSSymbolScaleEffect : NSSymbolEffect {
    long long  _layerBehavior;
    long long  _level;
}

@property (nonatomic) long long _layerBehavior;
@property (nonatomic) long long _level;

+ (id)effect;
+ (id)scaleDownEffect;
+ (id)scaleUpEffect;

- (long long)_layerBehavior;
- (long long)_level;
- (id)_rbOptionsMutable;
- (id)_withScaleLevel:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (void)set_layerBehavior:(long long)arg1;
- (void)set_level:(long long)arg1;

@end
