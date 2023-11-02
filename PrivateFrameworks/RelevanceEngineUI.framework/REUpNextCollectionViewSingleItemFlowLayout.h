
@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout {
    NSDictionary * _allAttributes;
    REUpNextCollectionViewFlowLayoutAttributes * _preferedCellAttributes;
    NSIndexPath * _preferedIndexPath;
}

@property (nonatomic, retain) NSIndexPath *preferedIndexPath;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)preferedIndexPath;
- (void)prepareLayout;
- (void)setPreferedIndexPath:(id)arg1;

@end
