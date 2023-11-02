
@interface CNContactListRemoveContactsFromGroupAction : CNContactListUndoableAction {
    NSArray * _actions;
    CNUIExternalComponentsFactory * _componentsFactory;
    bool  _confirmAction;
    CNContactStore * _contactStore;
    long long  _originalContactCount;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, readonly) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic) bool confirmAction;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) long long originalContactCount;

+ (id)actionForContact:(id)arg1 configuration:(id)arg2;
+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void).cxx_destruct;
- (id)actions;
- (id)componentsFactory;
- (bool)confirmAction;
- (id)contactStore;
- (bool)editRequiresAuthorization;
- (bool)editRequiresAuthorizationCheckForActions:(id)arg1;
- (id)groupToRemoveFrom;
- (id)initWithContacts:(id)arg1 configuration:(id)arg2 withConfirmation:(bool)arg3;
- (long long)originalContactCount;
- (void)performAction;
- (void)performAuthorizedRemoveFromGroup:(id)arg1;
- (void)performUndoAction;
- (void)setActions:(id)arg1;
- (void)setConfirmAction:(bool)arg1;
- (void)setContactStore:(id)arg1;
- (void)setOriginalContactCount:(long long)arg1;
- (bool)shouldReloadListOnCompletion;
- (void)showRemoveFromGroupFailureAlert;

@end
