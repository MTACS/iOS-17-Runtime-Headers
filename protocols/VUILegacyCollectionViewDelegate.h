
@protocol VUILegacyCollectionViewDelegate <UICollectionViewDelegate>

@optional

- (void)collectionView:(VUILegacyCollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(VUILegacyCollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)collectionView:(VUILegacyCollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)collectionViewCanBecomeFocused:(VUILegacyCollectionView *)arg1;

@end
