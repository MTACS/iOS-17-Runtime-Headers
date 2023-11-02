
@interface MUPlaceExternalActionViewModel : MUActionRowItemViewModel {
    GEOPlaceExternalAction * _externalAction;
    MUPlaceExternalActionMenuHelper * _menuHelper;
}

@property (nonatomic, readonly) GEOPlaceExternalAction *externalAction;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)analyticsButtonValues;
- (id)buildMenuWithPresentationOptions:(id)arg1;
- (id)externalAction;
- (id)initWithExternalAction:(id)arg1 amsResultProvider:(id)arg2 iconCache:(id)arg3 actionHandler:(id)arg4 analyticsHandler:(id)arg5;
- (bool)isEnabled;
- (void)performSingleVendorSelectionAction;
- (id)symbolName;
- (id)titleText;

@end
