
@interface CNContactListActionHelper : NSObject <CNContactListActionDelegate, CNContactOrbActionsControllerDelegate> {
    CNContactListActionConfiguration * _actionConfiguration;
    CNContactListActionExecutor * _actionExecutor;
    CNActionMenuHelper * _actionMenuHelper;
    CNContactOrbActionsController * _contactActionsController;
    NSArray * _contacts;
    <CNContactListActionHelperDelegate> * _delegate;
    bool  _includesContactOrbActions;
    bool  _includesEditingActions;
}

@property (nonatomic, retain) CNContactListActionConfiguration *actionConfiguration;
@property (nonatomic, retain) CNContactListActionExecutor *actionExecutor;
@property (nonatomic, retain) CNActionMenuHelper *actionMenuHelper;
@property (nonatomic, retain) CNContactOrbActionsController *contactActionsController;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListActionHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includesContactOrbActions;
@property (nonatomic) bool includesEditingActions;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeysForMultiSelectAction:(bool)arg1;

- (void).cxx_destruct;
- (void)action:(id)arg1 presentViewController:(id)arg2;
- (id)actionConfiguration;
- (void)actionDidFinish:(id)arg1;
- (id)actionExecutor;
- (id)actionMenuHelper;
- (id)actionsForContacts:(id)arg1 dataSourceFilter:(id)arg2 sourceView:(id)arg3;
- (bool)canRemoveFromGroup;
- (bool)canShowContactActionsForContacts:(id)arg1;
- (bool)canShowMergeActionForContacts:(id)arg1;
- (bool)canShowSetAsMyCardActionForContacts:(id)arg1;
- (id)contactActionsController;
- (id)contactActionsMenuForContact:(id)arg1;
- (id)contactActionsMenuFromItems:(id)arg1;
- (void)contactOrbActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)contacts;
- (void)copyContacts:(id)arg1;
- (id)delegate;
- (void)deleteContacts:(id)arg1;
- (void)deleteContacts:(id)arg1 dataSourceFilter:(id)arg2;
- (bool)includesContactOrbActions;
- (bool)includesEditingActions;
- (id)initWithContactStore:(id)arg1 environment:(id)arg2 contactFormatter:(id)arg3 undoManager:(id)arg4;
- (void)mergeContacts:(id)arg1;
- (id)presentingViewControllerForActions;
- (id)presentingViewControllerForActionsController:(id)arg1;
- (void)removeContactsFromGroup:(id)arg1 withConfirmation:(bool)arg2;
- (id /* block */)searchMenuActionProviderForContacts:(id)arg1;
- (void)setActionConfiguration:(id)arg1;
- (void)setActionExecutor:(id)arg1;
- (void)setActionMenuHelper:(id)arg1;
- (void)setContactActionsController:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludesContactOrbActions:(bool)arg1;
- (void)setIncludesEditingActions:(bool)arg1;
- (void)shareContacts:(id)arg1 sourceView:(id)arg2;
- (id)trailingSwipeActionsForContact:(id)arg1 dataSourceFilter:(id)arg2;
- (void)updateMeContact:(id)arg1;
- (void)willDismissMenu;
- (void)willDisplayMenuWithContextMenuInteraction:(id)arg1;

@end
