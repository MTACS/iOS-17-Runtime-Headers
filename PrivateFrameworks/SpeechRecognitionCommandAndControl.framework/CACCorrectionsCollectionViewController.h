
@interface CACCorrectionsCollectionViewController : UICollectionViewController {
    NSArray * _alternatives;
    <CACCorrectionsCollectionViewControllerDelegate> * _delegate;
    NSArray * _emojis;
    NSString * _text;
}

@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic) <CACCorrectionsCollectionViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *emojis;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_didTapCancel:(id)arg1;
- (id)_itemsInSection:(long long)arg1;
- (id)alternatives;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (id)emojis;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmojis:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
