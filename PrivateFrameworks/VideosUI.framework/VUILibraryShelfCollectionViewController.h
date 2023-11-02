
@interface VUILibraryShelfCollectionViewController : VUIShelfViewController {
    VUIMediaEntitiesDataSource * _dataSource;
    <VUILibraryShelfCollectionViewControllerDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    bool  _disableSeeAllButton;
    NSArray * _fetchResults;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    VUIMediaEntity * _lastSelectedMediaEntity;
    long long  _shelfType;
    VUILibraryLockupViewCell * _sizingCell;
}

@property (nonatomic, readonly) VUIMediaEntitiesDataSource *dataSource;
@property (nonatomic) <VUILibraryShelfCollectionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic) bool disableSeeAllButton;
@property (nonatomic, copy) NSArray *fetchResults;
@property (nonatomic, retain) NSString *headerSubtitle;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, retain) VUIMediaEntity *lastSelectedMediaEntity;
@property (nonatomic) long long shelfType;

- (void).cxx_destruct;
- (id)_attributedHeaderTitle;
- (double)_computeBottomMargin;
- (struct CGSize { double x1; double x2; })_configureSizingCellWithEntity:(id)arg1;
- (id)_createDiffableDataSourceForCollectionView:(id)arg1;
- (id)_createDiffableDataSourceSnapshot;
- (void)_didPressSeeAllButton:(id)arg1;
- (id)_getEntityIdentifiersFromEntities;
- (void)_headerTapped:(id)arg1;
- (void)_reloadMediaEntity:(id)arg1;
- (bool)_shouldHideDisclosureButton;
- (void)_updateHeaderView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureWithCollectionView:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (id)diffableDataSource;
- (bool)disableSeeAllButton;
- (id)fetchResults;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithDataSource:(id)arg1;
- (id)lastSelectedMediaEntity;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setDisableSeeAllButton:(bool)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1 andSubtitle:(id)arg2;
- (void)setLastSelectedMediaEntity:(id)arg1;
- (void)setShelfType:(long long)arg1;
- (long long)shelfType;
- (void)updateWithDataSource:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
