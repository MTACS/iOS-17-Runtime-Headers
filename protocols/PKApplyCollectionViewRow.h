
@protocol PKApplyCollectionViewRow <PKIdentifiable>

@required

- (Class)cellClass;
- (void)configureCell:(UICollectionViewListCell *)arg1;

@optional

- (void)handleCellSelection;
- (bool)shouldHighlightItem;

@end
