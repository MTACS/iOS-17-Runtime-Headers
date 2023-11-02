
@interface JTCollectionView : UICollectionView {
    bool  _inLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCollectionViewSize;
}

@property (nonatomic) bool inLayout;
@property (nonatomic) struct CGSize { double x1; double x2; } lastCollectionViewSize;

- (bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)firstVisibleIndexPath;
- (bool)inLayout;
- (struct CGSize { double x1; double x2; })lastCollectionViewSize;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (long long)selectedItem;
- (void)setInLayout:(bool)arg1;
- (void)setLastCollectionViewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)sortedIndexPathsForVisibleItems;
- (id)visibleSections;

@end
