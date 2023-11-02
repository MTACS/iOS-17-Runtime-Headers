
@interface MUPlaceMoreActionsViewModel : MUActionRowItemViewModel {
    NSArray * _excludedSystemActionTypes;
    NSArray * _externalActionMenuHelpers;
    UIMenuElement * _menuElement;
    <MUHeaderButtonMenuActionProvider> * _menuProvider;
    NSArray * _promotedSystemActionTypes;
}

@property (nonatomic, readonly) NSArray *externalActionMenuRevealButtons;

- (void).cxx_destruct;
- (id)_allExternalActionMenuRevealButtons;
- (id)accessibilityIdentifier;
- (id)analyticsButtonValues;
- (id)buildMenuWithPresentationOptions:(id)arg1;
- (id)externalActionMenuRevealButtons;
- (id)initWithGroupedExternalActions:(id)arg1 promotedSystemActionTypes:(id)arg2 excludedSystemActionTypes:(id)arg3 menuActionProvider:(id)arg4 amsResultProvider:(id)arg5 iconCache:(id)arg6 externalActionHandler:(id)arg7 analyticsHandler:(id)arg8;
- (bool)isEnabled;
- (id)symbolName;
- (id)titleText;

@end
