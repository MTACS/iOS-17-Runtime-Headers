
@interface CPSContactEntityViewController : CPSBaseEntityContentViewController <CPSActionButtonLayoutDelegate> {
    CPSActionsViewController * _actionsController;
    UILayoutGuide * _avatarAndDetailsLayoutGuide;
    CPSAvatarViewController * _avatarViewController;
    UILayoutGuide * _centeringLayoutGuide;
    NSArray * _layoutConstraints;
    CPSNameViewController * _nameViewController;
}

@property (nonatomic, readonly) CPSActionsViewController *actionsController;
@property (nonatomic, retain) UILayoutGuide *avatarAndDetailsLayoutGuide;
@property (nonatomic, readonly) CPSAvatarViewController *avatarViewController;
@property (nonatomic, retain) UILayoutGuide *centeringLayoutGuide;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, readonly) CPSNameViewController *nameViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionsController;
- (id)avatarAndDetailsLayoutGuide;
- (id)avatarViewController;
- (bool)buttonsShouldFill;
- (id)centeringLayoutGuide;
- (void)configureButton:(id)arg1;
- (void)didUpdateEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 resourceProvider:(id)arg2;
- (id)layoutConstraints;
- (id)nameViewController;
- (id)personEntity;
- (void)resetLayoutConstraints;
- (void)setAvatarAndDetailsLayoutGuide:(id)arg1;
- (void)setCenteringLayoutGuide:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupLayoutGuides;
- (void)setupViewControllers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end
