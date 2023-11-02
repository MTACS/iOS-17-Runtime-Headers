
@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate> {
    CNContactStore * _contactStore;
    <CNVCardImportControllerDelegate> * _delegate;
    CNUIEditAuthorizationController * _editAuthorizationController;
    CNUIGroupsAndContainersSaveManager * _groupsAndContainersSaveManager;
    <CNVCardImportControllerPresentationDelegate> * _presentationDelegate;
    UIViewController * _presentedViewController;
    CNQueue * _receivedContactsQueue;
    CNContainer * _targetContainer;
    CNGroup * _targetGroup;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNVCardImportControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUIEditAuthorizationController *editAuthorizationController;
@property (nonatomic, retain) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNVCardImportControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic) UIViewController *presentedViewController;
@property (nonatomic, retain) CNQueue *receivedContactsQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNContainer *targetContainer;
@property (nonatomic, retain) CNGroup *targetGroup;

- (void).cxx_destruct;
- (id)authorizationCheckForSavingReceivedContacts;
- (void)authorizeAndSaveUnknownPersons;
- (void)cancelModalUnknownPersons:(id)arg1;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)contactsFromURL:(id)arg1;
- (id)delegate;
- (id)dequeueContacts;
- (void)dismissContactsAndPresentNext;
- (id)editAuthorizationController;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (void)enqueueContacts:(id)arg1;
- (bool)enqueueContactsAtURL:(id)arg1;
- (id)groupsAndContainersSaveManager;
- (id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2;
- (id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2 targetGroup:(id)arg3 targetContainer:(id)arg4;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (void)presentEnqueueResultsUIForResultContacts:(id)arg1;
- (void)presentImportUIForContacts:(id)arg1;
- (id)presentationDelegate;
- (id)presentedViewController;
- (void)processNextContacts;
- (id)receivedContactsQueue;
- (void)saveUnknownPersons:(id)arg1;
- (void)saveUnknownPersonsAndMarkSaveWithAuthorizationResult:(long long)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditAuthorizationController:(id)arg1;
- (void)setGroupsAndContainersSaveManager:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setReceivedContactsQueue:(id)arg1;
- (void)setTargetContainer:(id)arg1;
- (void)setTargetGroup:(id)arg1;
- (void)showEditAuthorizationPane:(id)arg1 animated:(bool)arg2;
- (id)targetContainer;
- (id)targetGroup;

@end
