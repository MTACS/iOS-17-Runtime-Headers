
@protocol CKTranscriptCollectionViewDelegate <UICollectionViewDelegate>

@required

- (bool)collectionView:(CKTranscriptCollectionView *)arg1 shouldAllowSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionViewDidInset:(CKTranscriptCollectionView *)arg1;
- (void)collectionViewWillInset:(CKTranscriptCollectionView *)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)collectionViewWillProgrammaticallyScroll:(CKTranscriptCollectionView *)arg1 animated:(bool)arg2;
- (void)collectionViewWillScroll:(CKTranscriptCollectionView *)arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;

@end
