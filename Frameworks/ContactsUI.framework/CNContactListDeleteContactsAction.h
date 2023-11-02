
@interface CNContactListDeleteContactsAction : CNContactListUndoableAction {
    NSArray * _actions;
    CNUIExternalComponentsFactory * _componentsFactory;
    CNContactFormatter * _contactFormatter;
    CNContactStore * _contactStore;
    long long  _originalContactCount;
    CNUICoreRecentsManager * _recentsManager;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, readonly) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) long long originalContactCount;
@property (nonatomic, readonly) CNUICoreRecentsManager *recentsManager;

+ (id)actionForContact:(id)arg1 configuration:(id)arg2;
+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void).cxx_destruct;
- (id)actions;
- (id)alertTitle;
- (id)componentsFactory;
- (id)contactFormatter;
- (id)contactStore;
- (bool)editRequiresAuthorization;
- (bool)editRequiresAuthorizationCheckForActions:(id)arg1;
- (id)initWithContacts:(id)arg1 configuration:(id)arg2;
- (long long)originalContactCount;
- (void)performAction;
- (void)performUndoAction;
- (id)recentsManager;
- (void)setActions:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setOriginalContactCount:(long long)arg1;
- (bool)shouldReloadListOnCompletion;
- (void)showDeleteFailureAlert;

@end
