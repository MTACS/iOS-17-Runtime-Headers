
@interface CKAppMenuViewController : UIViewController <CKAppMenuCollectionViewCellDelegate, UICollectionViewDelegate> {
    UIVisualEffectView * _backgroundView;
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    <CKAppMenuViewControllerDelegate> * _delegate;
    NSArray * _menuItems;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAppMenuViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *menuItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)appMenuCollectionViewCell:(id)arg1 didHoverWithState:(long long)arg2;
- (void)appMenuCollectionViewCellWasTapped:(id)arg1;
- (id)backgroundView;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (void)handleSelectionOfIndexPath:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyCommandEscape:(id)arg1;
- (void)keyCommandReturn:(id)arg1;
- (id)menuItems;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setBackgroundView:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)updateBackgroundVisualEffect;
- (void)viewDidLoad;

@end
