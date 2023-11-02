
@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate> {
    CNContactListCollectionView * _contactListTableView;
    NSArray * _displayedContactProperties;
    AVExternalDevice * _externalDevice;
    bool  _limitedUI;
    CNStarkNoContentBannerView * _overlayView;
    UIView * _siriHeaderView;
}

@property (nonatomic, retain) CNContactListCollectionView *contactListTableView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayedContactProperties;
@property (nonatomic, retain) AVExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool limitedUI;
@property (nonatomic, retain) CNStarkNoContentBannerView *overlayView;
@property (nonatomic, retain) UIView *siriHeaderView;
@property (readonly) Class superclass;

+ (id)collectionViewLayoutWithFloatingHeaderViews:(bool)arg1 contactListStyleApplier:(id)arg2 directionalLayoutMargins:(id /* block */)arg3 hasNoContacts:(id /* block */)arg4;
+ (id)makeContactsDisplayedProperties;

- (void).cxx_destruct;
- (bool)canManageDuplicateContacts;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)contactDataSourceDidChange:(id)arg1;
- (id)contactListStyleApplier;
- (id)contactListTableView;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 shouldScrollToContact:(bool)arg3;
- (id)createCollectionView;
- (void)dealloc;
- (id)displayedContactProperties;
- (id)externalDevice;
- (void)handleSiriHeaderViewTap:(id)arg1;
- (double)headerViewWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithDataSource:(id)arg1 searchable:(bool)arg2 environment:(id)arg3 shouldUseLargeTitle:(bool)arg4;
- (bool)limitedUI;
- (void)limitedUINotification:(id)arg1;
- (id)overlayView;
- (void)postMessageOverlayIfNecessary;
- (void)refreshTableViewHeaderWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContactListTableView:(id)arg1;
- (void)setDisplayedContactProperties:(id)arg1;
- (void)setExternalDevice:(id)arg1;
- (void)setLimitedUI:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setSiriHeaderView:(id)arg1;
- (void)setupDataSource;
- (bool)shouldShowDuplicateBannerView;
- (void)showContactListTableView;
- (void)showOverlayView;
- (id)siriHeaderView;
- (void)updateLimitedUI;
- (void)viewDidLoad;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })viewDirectionalLayoutMargins;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
