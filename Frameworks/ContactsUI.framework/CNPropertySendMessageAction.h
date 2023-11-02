
@interface CNPropertySendMessageAction : CNPropertyAction <CNContactActionsControllerDelegate, CNPropertyContextMenuAction> {
    CNActionMenuHelper * _actionMenuHelper;
    CNContactActionsController * _actionsController;
    CNUIUserActionListDataSource * _actionsDataSource;
    UIContextMenuInteraction * _contextMenuInteraction;
}

@property (nonatomic, retain) CNActionMenuHelper *actionMenuHelper;
@property (nonatomic, retain) CNContactActionsController *actionsController;
@property (nonatomic, retain) CNUIUserActionListDataSource *actionsDataSource;
@property (nonatomic, retain) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionMenuHelper;
- (id)actionsController;
- (id)actionsDataSource;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)contextMenuInteraction;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 actionDataSource:(id)arg3;
- (id /* block */)menuProviderForContextMenuInteraction:(id)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)setActionMenuHelper:(id)arg1;
- (void)setActionsController:(id)arg1;
- (void)setActionsDataSource:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (bool)shouldPresentDisambiguationMenu;

@end
