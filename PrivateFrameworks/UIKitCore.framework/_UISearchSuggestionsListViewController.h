
@interface _UISearchSuggestionsListViewController : UICollectionViewController <UICollectionViewDelegate> {
    UICollectionViewDiffableDataSource * _dataSource;
    UISearchController * _searchController;
}

@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UISearchController *searchController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;
- (id)dataSource;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchController:(id)arg1;
- (id)searchController;
- (void)setDataSource:(id)arg1;
- (void)updateList;
- (void)viewDidLoad;

@end
