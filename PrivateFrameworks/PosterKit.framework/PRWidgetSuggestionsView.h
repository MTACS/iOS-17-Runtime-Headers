
@interface PRWidgetSuggestionsView : UIView {
    UICollectionView * _collectionView;
}

@property (nonatomic, readonly) UICollectionView *collectionView;

- (void).cxx_destruct;
- (id)_makeLayout;
- (id)collectionView;
- (id)initWithLayoutDelegate:(id)arg1 usingSidebarLayout:(bool)arg2;
- (void)layoutSubviews;

@end
