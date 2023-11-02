
@interface NewsSubscription.FlexiblePaywallCollectionViewLayout : UICollectionViewLayout {
    void itemAttributes;
    void layoutProvider;
    void supplementaryItemAttributes;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionViewContentSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;

@end
