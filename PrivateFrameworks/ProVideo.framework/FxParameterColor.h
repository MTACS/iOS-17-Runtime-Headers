
@interface FxParameterColor : FxPinParameter {
    struct FxParameterColorPriv { bool x1; } * _colorPriv;
}

- (void)dealloc;
- (bool)hasAlpha;
- (id)init;
- (void)setHasAlpha:(bool)arg1;

@end
