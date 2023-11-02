
@interface FxPinParameter : FxPin {
    struct FxPinParameterPriv { } * _paramPriv;
    Class  customUI;
    id  defaultValue;
}

- (Class)customPinControl;
- (void)dealloc;
- (id)defaultValue;
- (id)init;
- (void)setCustomPinControl:(Class)arg1;
- (void)setDefaultValue:(id)arg1;

@end
