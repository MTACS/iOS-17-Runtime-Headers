
@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout {
    NSDictionary * _allAttributes;
    NSMutableDictionary * _allLineAttributes;
    <UIDebuggingInformationHierarchyLayoutDelegate> * _delegate;
    NSMutableArray * _indexPathsToDelete;
}

@property (nonatomic, retain) NSDictionary *allAttributes;
@property (nonatomic, retain) NSMutableDictionary *allLineAttributes;
@property (nonatomic) <UIDebuggingInformationHierarchyLayoutDelegate> *delegate;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)_recomputeAttributes;
- (id)allAttributes;
- (id)allLineAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)delegate;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (void)setAllAttributes:(id)arg1;
- (void)setAllLineAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
