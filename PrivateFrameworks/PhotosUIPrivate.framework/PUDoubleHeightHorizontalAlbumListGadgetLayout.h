
@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUHorizontalAlbumListGadgetLayout {
    NSMutableDictionary * _layoutAttributesByIndexPath;
}

@property (nonatomic, readonly) NSMutableDictionary *layoutAttributesByIndexPath;

- (void).cxx_destruct;
- (void)_adjustLayoutAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)initWithHorizontalLayoutDelegate:(id)arg1 showsHorizontalScrollIndicator:(bool)arg2;
- (void)invalidateLayout;
- (id)layoutAttributesByIndexPath;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)prefersPagingEnabled;

@end
