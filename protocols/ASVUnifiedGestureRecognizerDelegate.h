
@protocol ASVUnifiedGestureRecognizerDelegate <NSObject>

@required

- (void)unifiedGestureRecognizer:(void *)arg1 doubleTappedAtScreenPoint:(void *)arg2 onAsset:(void *)arg3; // needs 3 arg types, found 2: ASVUnifiedGestureRecognizer *, bool
- (void)unifiedGestureRecognizer:(ASVUnifiedGestureRecognizer *)arg1 rotatedAssetByDeltaYaw:(float)arg2;
- (void)unifiedGestureRecognizer:(ASVUnifiedGestureRecognizer *)arg1 scaledAssetToScale:(float)arg2;
- (void)unifiedGestureRecognizer:(void *)arg1 singleTappedAtScreenPoint:(void *)arg2 onAsset:(void *)arg3; // needs 3 arg types, found 2: ASVUnifiedGestureRecognizer *, bool
- (void)unifiedGestureRecognizerBeganScaling:(ASVUnifiedGestureRecognizer *)arg1;
- (void)unifiedGestureRecognizerEndedScaling:(ASVUnifiedGestureRecognizer *)arg1;

@optional

- (void)unifiedGestureRecognizerBeganRotation:(ASVUnifiedGestureRecognizer *)arg1;
- (void)unifiedGestureRecognizerEndedRotation:(ASVUnifiedGestureRecognizer *)arg1;

@end
