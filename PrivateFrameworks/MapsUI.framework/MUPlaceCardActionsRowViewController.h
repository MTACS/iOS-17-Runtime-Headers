
@interface MUPlaceCardActionsRowViewController : UIViewController {
    <MKPlaceActionManagerProtocol> * _actionManager;
    MUPlaceCardActionsRowView * _actionsRowView;
    NSArray * _items;
    <MUPlaceCardActionsRowViewMenuProvider> * _menuProvider;
}

@property (nonatomic, readonly) NSArray *actionButtons;
@property (nonatomic) <MKPlaceActionManagerProtocol> *actionManager;
@property (nonatomic, readonly) MUPlaceCardActionsRowView *actionsRowView;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic) <MUPlaceCardActionsRowViewMenuProvider> *menuProvider;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)actionButtons;
- (id)actionManager;
- (id)actionsRowView;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)items;
- (id)menuProvider;
- (void)setActionManager:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMenuProvider:(id)arg1;
- (void)updateActionsRowView;
- (void)viewDidLoad;

@end
