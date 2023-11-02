
@interface CNContactEditAuthorizationManager : NSObject <CNUIEditAuthorizationControllerDelegate> {
    CNUIEditAuthorizationController * _authorizationController;
    long long  _authorizationResult;
    id /* block */  _authorizationResultBlock;
    CNContact * _contact;
    CNContactStore * _contactStore;
    CNContactViewCache * _contactViewCache;
    bool  _ignoresParentalRestrictions;
    CNContainer * _parentContainer;
}

@property (nonatomic, retain) CNUIEditAuthorizationController *authorizationController;
@property (nonatomic) long long authorizationResult;
@property (nonatomic, copy) id /* block */ authorizationResultBlock;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNContactViewCache *contactViewCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresParentalRestrictions;
@property (nonatomic, retain) CNContainer *parentContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authorizationCheck;
- (id)authorizationController;
- (long long)authorizationResult;
- (id /* block */)authorizationResultBlock;
- (void)authorizeForViewController:(id)arg1 sender:(id)arg2 animated:(bool)arg3 completionBlock:(id /* block */)arg4;
- (id)contact;
- (id)contactStore;
- (id)contactViewCache;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (bool)ignoresParentalRestrictions;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;
- (id)parentContainer;
- (void)resetAuthorization;
- (bool)saveWasAuthorized;
- (void)setAuthorizationController:(id)arg1;
- (void)setAuthorizationResult:(long long)arg1;
- (void)setAuthorizationResultBlock:(id /* block */)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactViewCache:(id)arg1;
- (void)setIgnoresParentalRestrictions:(bool)arg1;
- (void)setParentContainer:(id)arg1;
- (bool)shouldPromptForPasscodeAuthorization;
- (void)updateWithContact:(id)arg1;

@end
