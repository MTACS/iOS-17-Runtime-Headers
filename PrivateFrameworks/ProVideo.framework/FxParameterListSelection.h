
@interface FxParameterListSelection : FxPinParameter {
    struct FxParameterListSelectionPriv { int x1; id x2; } * _listSelectionPriv;
}

- (void)dealloc;
- (id)displayNameForValue:(id)arg1;
- (id)init;
- (id)listItems;
- (int)preferredListVariant;
- (void)setListItems:(id)arg1;
- (void)setPreferredListVariant:(int)arg1;

@end
