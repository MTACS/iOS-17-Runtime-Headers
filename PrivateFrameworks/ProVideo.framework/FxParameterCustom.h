
@interface FxParameterCustom : FxPinParameter <FxCustomParameterDefinition> {
    struct FxParameterCustomPriv { } * _customPriv;
}

- (id)dataFromValue:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)valueFromData:(id)arg1;

@end
