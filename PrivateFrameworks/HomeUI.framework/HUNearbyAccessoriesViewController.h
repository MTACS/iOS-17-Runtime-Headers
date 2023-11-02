
@interface HUNearbyAccessoriesViewController : HUControllableItemCollectionViewController <HUCollectionLayoutManagerDelegate, HUPresentationDelegateHost> {
    void _userInfoDescription;
    void _userInfoHeading;
    void currentAccessory;
    void layoutManager;
    void nearbyAccessoriesDelegate;
    void presentationDelegate;
    void supportsQuickControls;
    void userInfoConstraints;
}

@property (nonatomic, retain) <HUPresentationDelegate> *presentationDelegate;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)displayEditorWithSender:(id)arg1;
- (id)displayedItemsInSection:(id)arg1;
- (void)doneButtonPressedWithSender:(id)arg1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithSourceItem:(id)arg1 supportsQuickControls:(bool)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginLongPressPresentationWithContext:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (bool)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;
- (id)presentationDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
