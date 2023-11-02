
@interface MUPlaceActionRowItemViewModel : MUActionRowItemViewModel {
    MKPlaceCardActionItem * _actionRowItem;
    <MUPlaceCardActionsRowViewMenuProvider> * _menuProvider;
    unsigned long long  _style;
}

@property (nonatomic, readonly) MKPlaceCardActionItem *actionRowItem;
@property (nonatomic) <MUPlaceCardActionsRowViewMenuProvider> *menuProvider;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)actionRowItem;
- (id)analyticsButtonValue;
- (id)buildMenuWithPresentationOptions:(id)arg1;
- (void)dealloc;
- (id)initWithActionRowItem:(id)arg1 menuProvider:(id)arg2 style:(unsigned long long)arg3;
- (bool)isEnabled;
- (bool)isSelected;
- (id)menuProvider;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preferredBackgroundColor;
- (id)preferredTintColor;
- (void)setMenuProvider:(id)arg1;
- (id)symbolName;
- (id)titleText;

@end
