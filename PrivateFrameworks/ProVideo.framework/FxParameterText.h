
@interface FxParameterText : FxPinParameter {
    struct FxParameterTextPriv { bool x1; } * _textPriv;
}

- (bool)allowsReturns;
- (void)dealloc;
- (id)init;
- (void)setAllowsReturns:(bool)arg1;

@end
