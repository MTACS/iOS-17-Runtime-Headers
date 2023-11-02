
@interface CNUIGroupsAndContainersSaveManager : NSObject <CNUIContactSaveDelegate, CNUIEditAuthorizationControllerDelegate> {
    CNUIEditAuthorizationController * _authorizationController;
    id /* block */  _authorizationResultBlock;
    CNContactStore * _contactStore;
    CNContactViewCache * _contactViewCache;
}

@property (nonatomic, retain) CNUIEditAuthorizationController *authorizationController;
@property (nonatomic, copy) id /* block */ authorizationResultBlock;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNContactViewCache *contactViewCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_updateSaveRequest:(id)arg1 addContact:(id)arg2 toGroupContext:(id)arg3 contactsToLink:(id)arg4;
- (id)_updateSaveRequest:(id)arg1 addContact:(id)arg2 toGroups:(id)arg3 inContainer:(id)arg4 contactParentContainer:(id)arg5 contactsToLink:(id)arg6;
- (void)_updateSaveRequest:(id)arg1 removeContact:(id)arg2 fromGroups:(id)arg3;
- (id)acAccountForContainer:(id)arg1;
- (id)acAccountForGroupIdentifier:(id)arg1;
- (id)accountForContainerIdentifier:(id)arg1;
- (id)addContact:(id)arg1 toGroup:(id)arg2 inContainer:(id)arg3 moveWasAuthorized:(bool)arg4;
- (id)addContact:(id)arg1 toGroup:(id)arg2 moveWasAuthorized:(bool)arg3;
- (id)addContact:(id)arg1 toGroupIdentifier:(id)arg2 inContainerIdentifier:(id)arg3 moveWasAuthorized:(bool)arg4;
- (id)addContact:(id)arg1 toGroupWithIdentifier:(id)arg2 moveWasAuthorized:(bool)arg3;
- (id)addContacts:(id)arg1 toGroup:(id)arg2 inContainer:(id)arg3 moveWasAuthorized:(bool)arg4;
- (id)addContacts:(id)arg1 toGroupWithIdentifier:(id)arg2 inContainerWithIdentifier:(id)arg3 moveWasAuthorized:(bool)arg4;
- (bool)addLinkedContacts:(id)arg1 toOriginalContact:(id)arg2 ignoresGuardianRestrictions:(bool)arg3 issuedRequestIdentifiers:(id)arg4;
- (id)allMDMUnauthorizedAccountsForTargetGroup:(id)arg1 withManagedConfiguration:(id)arg2;
- (id)authorizationController;
- (id /* block */)authorizationResultBlock;
- (void)authorizeForViewController:(id)arg1 sender:(id)arg2 animated:(bool)arg3 completionBlock:(id /* block */)arg4;
- (id)contactStore;
- (id)contactViewCache;
- (bool)container:(id)arg1 containsNonUnifiedContact:(id)arg2 inContactStore:(id)arg3;
- (id)containerForContainerIdentifier:(id)arg1;
- (id)containerForGroupIdentifier:(id)arg1;
- (bool)deleteContainerWithIdentifier:(id)arg1 inStore:(id)arg2 ignoresGuardianRestrictions:(bool)arg3 issuedRequestIdentifiers:(id)arg4;
- (bool)deleteGroupWithIdentifier:(id)arg1 inStore:(id)arg2 ignoresGuardianRestrictions:(bool)arg3 issuedRequestIdentifiers:(id)arg4;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (bool)editRequiresAuthorizationForContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(bool)arg3;
- (id)exchangeContactsToDeleteInAccountIdentifier:(id)arg1 originalContact:(id)arg2;
- (id)groupForGroupIdentifier:(id)arg1;
- (id)groupsByContainerDictForContainers:(id)arg1 groups:(id)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 contactViewCache:(id)arg2;
- (bool)isAuthorizedToAddContact:(id)arg1 toContainer:(id)arg2 ignoresParentalRestrictions:(bool)arg3;
- (bool)isAuthorizedToEditContact:(id)arg1 withTargetContainer:(id)arg2 ignoresParentalRestrictions:(bool)arg3;
- (bool)isAuthorizedToEditContact:(id)arg1 withTargetGroupWithIdentifier:(id)arg2 ignoresParentalRestrictions:(bool)arg3;
- (bool)isAuthorizedToEditContainer:(id)arg1;
- (bool)isAuthorizedToEditContainerWithIdentifier:(id)arg1;
- (bool)isMDMAuthorizedToAddContact:(id)arg1 toAccount:(id)arg2 withManagedConfiguration:(id)arg3;
- (id)linkedContactForContact:(id)arg1 inContainer:(id)arg2 inContactStore:(id)arg3;
- (id)mdmUnauthorizedContactIdentifiersForTargetGroup:(id)arg1 withManagedConfiguration:(id)arg2;
- (id)parentAccountExternalIdentifiersForContact:(id)arg1;
- (id)parentGroupsForContact:(id)arg1;
- (bool)removeContact:(id)arg1 fromGroup:(id)arg2 ignoresGuardianRestrictions:(bool)arg3;
- (bool)removeContact:(id)arg1 fromGroups:(id)arg2 ignoresGuardianRestrictions:(bool)arg3;
- (void)setAuthorizationController:(id)arg1;
- (void)setAuthorizationResultBlock:(id /* block */)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactViewCache:(id)arg1;
- (id)updateContacts:(id)arg1 forGroupContext:(id)arg2 ignoresGuardianRestrictions:(bool)arg3 issuedRequestIdentifiers:(id)arg4;
- (bool)updateContainerWithIdentifier:(id)arg1 inStore:(id)arg2 withNewName:(id)arg3 ignoresGuardianRestrictions:(bool)arg4 issuedRequestIdentifiers:(id)arg5;
- (bool)updateGroupWithIdentifier:(id)arg1 inStore:(id)arg2 withNewName:(id)arg3 ignoresGuardianRestrictions:(bool)arg4 issuedRequestIdentifiers:(id)arg5;

@end
