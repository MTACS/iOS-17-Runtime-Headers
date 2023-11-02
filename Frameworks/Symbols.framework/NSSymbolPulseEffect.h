
@interface NSSymbolPulseEffect : NSSymbolEffect {
    long long  _layerBehavior;
}

@property (nonatomic) long long _layerBehavior;

+ (id)effect;

- (long long)_layerBehavior;
- (id)_rbOptionsMutable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (void)set_layerBehavior:(long long)arg1;

@end
