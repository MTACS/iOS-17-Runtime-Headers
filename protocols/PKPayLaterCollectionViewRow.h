
@protocol PKPayLaterCollectionViewRow <PKIdentifiable>

@required

- (Class)cellClass;
- (void)configureCell:(UICollectionViewCell *)arg1;

@optional

- (void)handleCellSelection;
- (void)handleCellSelectionWithContinueBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)shouldHighlightItem;

@end
