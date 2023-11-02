
@interface AVTGroupListCollectionView : UIView <AVTGroupPicker, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    CALayer * _border;
    UICollectionView * _collectionView;
    NSArray * _groupItems;
    <AVTGroupPickerDelegate> * delegate;
    long long  selectedGroupIndex;
}

@property (nonatomic, retain) CALayer *border;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTGroupPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *groupItems;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedGroupIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)border;
- (double)borderWidth;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (id)groupItems;
- (id)initWithGroupItems:(id)arg1 environment:(id)arg2;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (long long)selectedGroupIndex;
- (void)setBorder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedGroupIndex:(long long)arg1;
- (void)setSelectedGroupIndex:(long long)arg1 animated:(bool)arg2;
- (void)setupBorder;
- (void)setupView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCollectionLayoutItemSize:(id)arg1;

@end
