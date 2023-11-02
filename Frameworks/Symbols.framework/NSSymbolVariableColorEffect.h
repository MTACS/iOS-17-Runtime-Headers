
@interface NSSymbolVariableColorEffect : NSSymbolEffect {
    long long  _fillStyle;
    long long  _inactiveStyle;
    long long  _playbackStyle;
}

@property (nonatomic) long long _fillStyle;
@property (nonatomic) long long _inactiveStyle;
@property (nonatomic) long long _playbackStyle;

+ (id)effect;

- (long long)_fillStyle;
- (long long)_inactiveStyle;
- (long long)_playbackStyle;
- (id)_rbOptionsMutable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectWithCumulative;
- (id)effectWithDimInactiveLayers;
- (id)effectWithHideInactiveLayers;
- (id)effectWithIterative;
- (id)effectWithNonReversing;
- (id)effectWithReversing;
- (void)set_fillStyle:(long long)arg1;
- (void)set_inactiveStyle:(long long)arg1;
- (void)set_playbackStyle:(long long)arg1;

@end
