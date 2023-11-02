
@interface CPSGridTemplateCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _gridButtons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *gridButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)gridButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 gridButtons:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setGridButtons:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
