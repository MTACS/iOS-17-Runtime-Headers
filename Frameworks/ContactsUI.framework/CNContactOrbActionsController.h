
@interface CNContactOrbActionsController : NSObject <CNContactActionsControllerDelegate, CNQuickActionsManagerDelegate> {
    NSArray * _actionCategories;
    CNContactActionsController * _actionsController;
    CNQuickActionsManager * _actionsManager;
    bool  _bypassActionValidation;
    NSArray * _contacts;
    <CNContactOrbActionsControllerDelegate> * _delegate;
    NSArray * _menuItems;
}

@property (nonatomic, retain) NSArray *actionCategories;
@property (nonatomic, retain) CNContactActionsController *actionsController;
@property (nonatomic, retain) CNQuickActionsManager *actionsManager;
@property (nonatomic) bool bypassActionValidation;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactOrbActionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *menuItems;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)actionCategories;
- (id)actionsController;
- (id)actionsManager;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (bool)bypassActionValidation;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)contacts;
- (id)currentAvailableMenuItems;
- (id)delegate;
- (id)initWithContact:(id)arg1;
- (id)initWithContacts:(id)arg1;
- (id)initWithContacts:(id)arg1 actionCategories:(id)arg2;
- (id)initWithContacts:(id)arg1 actionCategories:(id)arg2 bypassActionValidation:(bool)arg3;
- (id)menuItems;
- (id)menuItemsForContactsWithActions:(id)arg1;
- (void)reloadMenuItems;
- (void)setActionCategories:(id)arg1;
- (void)setActionsController:(id)arg1;
- (void)setActionsManager:(id)arg1;
- (void)setBypassActionValidation:(bool)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setupActionsControllerForContact:(id)arg1;
- (void)setupActionsForContacts:(id)arg1;
- (void)setupActionsManagerForContacts:(id)arg1;
- (bool)shouldUseActionsManagerForContacts:(id)arg1;

@end
