
@interface CNStarkCardViewController : UIViewController <CNContactContentDisplayViewControllerDelegate, CNContactContentViewControllerDelegate> {
    CNStarkActionsController * _actionsController;
    UILayoutGuide * _avatarAndDetailsLayoutGuide;
    CNAvatarViewController * _avatarViewController;
    UILayoutGuide * _centeringLayoutGuide;
    CNContact * _contact;
    CNStarkContactInfoViewController * _contactInfoViewController;
    NSArray * _displayedContactProperties;
    NSArray * _layoutConstraints;
}

@property (nonatomic, readonly) CNStarkActionsController *actionsController;
@property (nonatomic, retain) UILayoutGuide *avatarAndDetailsLayoutGuide;
@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;
@property (nonatomic, retain) UILayoutGuide *centeringLayoutGuide;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNStarkContactInfoViewController *contactInfoViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedContactProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (id)starkCardControllerForCalendarEventWithContact:(id)arg1;

- (void).cxx_destruct;
- (id)actionsController;
- (id)avatarAndDetailsLayoutGuide;
- (id)avatarViewController;
- (id)centeringLayoutGuide;
- (id)contact;
- (void)contactDisplayViewController:(id)arg1 didUpdateContact:(id)arg2;
- (void)contactDisplayViewController:(id)arg1 dismissChildContactViewController:(id)arg2 forAction:(id)arg3;
- (void)contactDisplayViewController:(id)arg1 isPresentingFullscreen:(bool)arg2;
- (void)contactDisplayViewController:(id)arg1 prepareChildContactViewController:(id)arg2 forAction:(id)arg3;
- (void)contactDisplayViewController:(id)arg1 presentChildContactViewController:(id)arg2 forAction:(id)arg3;
- (id)contactInfoViewController;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (id)displayedContactProperties;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSaveAuthorizedForPropertiesOfContactDisplayViewController:(id)arg1;
- (id)layoutConstraints;
- (void)resetLayoutConstraints;
- (void)setAvatarAndDetailsLayoutGuide:(id)arg1;
- (void)setCenteringLayoutGuide:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupLayoutGuides;
- (void)setupViewControllers;
- (void)showMore:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateNavigationItems;
- (void)updateViewConstraints;
- (void)updateViewControllers;
- (void)viewDidLoad;

@end
