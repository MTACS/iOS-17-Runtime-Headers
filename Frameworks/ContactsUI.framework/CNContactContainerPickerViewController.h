
@interface CNContactContainerPickerViewController : UIViewController <UICollectionViewDelegate> {
    CNAccountsAndGroupsDataSource * _accountsDataSource;
    UICollectionView * _collectionView;
    CNContactViewCache * _contactViewCache;
    NSArray * _containers;
    UICollectionViewDiffableDataSource * _dataSource;
    <CNContactContainerPickerViewControllerDelegate> * _delegate;
    NSArray * _items;
    NSArray * _selectedContainerIdentifiers;
}

@property (nonatomic, retain) CNAccountsAndGroupsDataSource *accountsDataSource;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CNContactViewCache *contactViewCache;
@property (nonatomic, retain) NSArray *containers;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactContainerPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSArray *selectedContainerIdentifiers;
@property (readonly) Class superclass;

+ (id)os_log;

- (void).cxx_destruct;
- (id)accountsDataSource;
- (id)allAccounts;
- (id)collectionView;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)contactViewCache;
- (id)containers;
- (id)currentSnapshot;
- (id)dataSource;
- (id)dataSourceWithCellRegistration:(id)arg1;
- (id)delegate;
- (void)discoverContainers;
- (id)initWithContactViewCache:(id)arg1 selectedContainerIdentifiers:(id)arg2;
- (id)items;
- (void)reloadData;
- (id)selectedContainerIdentifiers;
- (void)setAccountsDataSource:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContactViewCache:(id)arg1;
- (void)setContainers:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectedContainerIdentifiers:(id)arg1;
- (void)setupCollectionView;
- (void)setupDiffableDataSource;
- (void)setupDoneButton;
- (void)viewDidLoad;
- (id)writableContainersForAccount:(id)arg1;

@end
