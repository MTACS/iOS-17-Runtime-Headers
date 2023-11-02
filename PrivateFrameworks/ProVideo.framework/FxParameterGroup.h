
@interface FxParameterGroup : FxPinParameter {
    struct FxParameterGroupPriv { id x1; } * _groupPriv;
}

- (void)dealloc;
- (id)init;
- (void)setSubPins:(id)arg1;
- (id)subPins;

@end
