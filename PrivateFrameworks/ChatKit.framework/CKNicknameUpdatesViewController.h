
@interface CKNicknameUpdatesViewController : UIViewController <CKNicknameUpdatesCollectionViewCellDelegate, UICollectionViewDelegate> {
    CKNicknameUpdatesCollectionView * _collectionView;
    UICollectionViewCompositionalLayout * _collectionViewLayout;
    UICollectionViewDiffableDataSource * _dataSource;
    <CKNicknameUpdatesViewControllerDelegate> * _delegate;
    NSArray * _nicknameUpdates;
}

@property (nonatomic, retain) CKNicknameUpdatesCollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKNicknameUpdatesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *nicknameUpdates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCloseButtonForNavigationItem:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_nicknameStateChanged:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3;
- (unsigned long long)cellOrderForIndexPath:(id)arg1;
- (id)collectionView;
- (id)collectionViewLayout;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)nicknameUpdates;
- (void)reloadData;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNicknameUpdates:(id)arg1;
- (void)updateCell:(id)arg1 selectedAction:(unsigned long long)arg2 sourceView:(id)arg3;
- (void)updatePreferredContentSize;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
