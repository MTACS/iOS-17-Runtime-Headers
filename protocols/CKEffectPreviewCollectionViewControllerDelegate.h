
@protocol CKEffectPreviewCollectionViewControllerDelegate

@required

- (CKBalloonView *)balloonView;
- (void)effectCollectionViewController:(CKEffectPreviewCollectionViewController *)arg1 willDisplayEffect:(CKFullScreenEffect *)arg2;
- (void)setBalloonView:(CKBalloonView *)arg1;

@end
