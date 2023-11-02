
@interface CNContactGroupPickerViewController : UIViewController <UICollectionViewDelegate> {
    CNAccountsAndGroupsDataSource * _accountsAndGroupsDataSource;
    UICollectionView * _collectionView;
    <CNContactGroupPickerViewControllerDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    _UIDiffableDataSourceOutlineSectionController * _sectionController;
    NSArray * _sourceAccountExternalIdentifiers;
}

@property (nonatomic, retain) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactGroupPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIDiffableDataSourceOutlineSectionController *sectionController;
@property (nonatomic, retain) NSArray *sourceAccountExternalIdentifiers;
@property (readonly) Class superclass;

+ (id)os_log;

- (void).cxx_destruct;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (id)accessoryTintColorForStateEnabled:(bool)arg1;
- (id)accountsAndGroupsDataSource;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })bottomSeparatorInsetsForIndexPath:(id)arg1 configuration:(id)arg2;
- (void)cancel:(id)arg1;
- (id)cellAccessoriesForItem:(id)arg1 enabled:(bool)arg2;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)diffableDataSource;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 sourceAccountExternalIdentifiers:(id)arg2;
- (bool)isValidGroupAtIndexPath:(id)arg1;
- (void)reloadData;
- (id)sectionController;
- (void)setAccountsAndGroupsDataSource:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setSectionController:(id)arg1;
- (void)setSourceAccountExternalIdentifiers:(id)arg1;
- (void)setupCollectionView;
- (void)setupDiffableDataSource;
- (void)setupNavigationButtons;
- (id)sourceAccountExternalIdentifiers;
- (void)viewDidLoad;

@end
