
@interface MUPlaceCardActionsRowView : MUGroupedActionsRowView <MUPlaceCardActionsRowViewDelegate> {
    <MKPlaceActionManagerProtocol> * _actionManager;
    <MUPlaceCardActionsRowViewMenuProvider> * _menuProvider;
    unsigned long long  _style;
    NSArray * _viewModels;
}

@property (nonatomic) <MKPlaceActionManagerProtocol> *actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUPlaceCardActionsRowViewMenuProvider> *menuProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildModuleForAnalytics;
- (int)_buttonItemTypeFromActionItem:(id)arg1;
- (void)_createActionsFromActionManager;
- (id)actionManager;
- (void)actionsRowView:(id)arg1 didSelectViewModel:(id)arg2 presentationOptions:(id)arg3;
- (id)initWithConfiguration:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)menuProvider;
- (void)reload;
- (void)setActionManager:(id)arg1;
- (void)setMenuProvider:(id)arg1;

@end
