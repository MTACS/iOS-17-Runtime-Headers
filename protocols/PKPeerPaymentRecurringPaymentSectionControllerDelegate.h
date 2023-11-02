
@protocol PKPeerPaymentRecurringPaymentSectionControllerDelegate <NSObject>

@required

- (UICollectionView *)collectionView;
- (void)deselectCells;
- (UINavigationController *)navigationController;

@end
