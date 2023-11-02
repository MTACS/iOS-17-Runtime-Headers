
@interface VUIFamilyMembersViewController : UIViewController <UICollectionViewDelegate, VUILegacyCollectionViewDelegate, VUILibraryDataSourceDelegate> {
    VUILegacyCollectionView * _collectionView;
    VUIViewControllerContentPresenter * _contentPresenter;
    VUILibraryFamilyMembersDataSource * _dataSource;
    <VUIFamilyMembersViewControllerDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    NSDictionary * _familyMemberHashToFamilyMemberDictionary;
    long long  _gridStyle;
    long long  _gridType;
    double  _lastAppearWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCollectionViewSize;
    VUIFamilyMemberCell * _sizingCell;
    double  _tvCellWidth;
}

@property (nonatomic, retain) VUILegacyCollectionView *collectionView;
@property (nonatomic, retain) VUIViewControllerContentPresenter *contentPresenter;
@property (nonatomic, retain) VUILibraryFamilyMembersDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIFamilyMembersViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic, retain) NSDictionary *familyMemberHashToFamilyMemberDictionary;
@property (nonatomic) long long gridStyle;
@property (nonatomic) long long gridType;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } lastCollectionViewSize;
@property (nonatomic, retain) VUIFamilyMemberCell *sizingCell;
@property (readonly) Class superclass;
@property (nonatomic) double tvCellWidth;

- (void).cxx_destruct;
- (void)_clearCollectionViewSelections:(bool)arg1;
- (id)_createCollectionView;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)arg1;
- (id)_getFamilyMemberIdentifiersFromFamilyMembers;
- (void)_updateCurrentViewIfNeeded;
- (void)_updateLayoutForSizeIfNeeded:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateNavigationBarPadding;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)contentPresenter;
- (id)dataSource;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)diffableDataSource;
- (id)familyMemberHashToFamilyMemberDictionary;
- (long long)gridStyle;
- (long long)gridType;
- (id)initWithDataSource:(id)arg1;
- (struct CGSize { double x1; double x2; })lastCollectionViewSize;
- (void)loadView;
- (void)registerForApplicationNotifications;
- (void)setCollectionView:(id)arg1;
- (void)setContentPresenter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setFamilyMemberHashToFamilyMemberDictionary:(id)arg1;
- (void)setGridStyle:(long long)arg1;
- (void)setGridType:(long long)arg1;
- (void)setLastCollectionViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSizingCell:(id)arg1;
- (void)setTvCellWidth:(double)arg1;
- (id)sizingCell;
- (double)tvCellWidth;
- (void)unregisterApplicationNotifications;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
