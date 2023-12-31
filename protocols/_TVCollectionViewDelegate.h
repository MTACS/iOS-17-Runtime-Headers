
@protocol _TVCollectionViewDelegate <UICollectionViewDelegate>

@optional

- (void)collectionView:(_TVCollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(_TVCollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)collectionView:(_TVCollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)collectionViewCanBecomeFocused:(_TVCollectionView *)arg1;

@end
