
@interface CKEffectSelectionViewController : UIViewController <UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    <CKEffectSelectionViewControllerDelegate> * _delegate;
    CKFullScreenEffectManager * _fsem;
    UIColor * _labelColor;
    bool  _labelUsesDarkVibrancy;
    NSArray * _sendEffects;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKEffectSelectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKFullScreenEffectManager *fsem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic) bool labelUsesDarkVibrancy;
@property (nonatomic, retain) NSString *selectedEffectIdentifier;
@property (nonatomic, retain) NSArray *sendEffects;
@property (readonly) Class superclass;

+ (id)orderedEffectIdentifiers;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)dataSource;
- (id)delegate;
- (id)effectImageForIndexPath:(id)arg1;
- (id)effectTitleForIndexPath:(id)arg1;
- (id)fsem;
- (id)labelColor;
- (bool)labelUsesDarkVibrancy;
- (double)maxCellHeight;
- (id)selectedEffectIdentifier;
- (id)sendEffects;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFsem:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLabelUsesDarkVibrancy:(bool)arg1;
- (void)setSelectedEffectIdentifier:(id)arg1;
- (void)setSendEffects:(id)arg1;
- (void)viewDidLoad;

@end
