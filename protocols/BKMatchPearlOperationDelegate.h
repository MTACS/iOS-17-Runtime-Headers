
@protocol BKMatchPearlOperationDelegate <BKFaceDetectOperationDelegate, BKMatchOperationDelegate>

@optional

- (void)matchOperation:(BKMatchPearlOperation *)arg1 matchedWithResult:(BKMatchPearlResultInfo *)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 providedFaceOcclusionInfo:(BKFaceOcclusionInfo *)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 providedFaceWUPoseEligibilityInfo:(BKFaceWUPoseEligibilityInfo *)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 providedFeedback:(long long)arg2;
- (void)matchOperation:(BKMatchPearlOperation *)arg1 requestedPasscodeShortcutWithReason:(unsigned long long)arg2;

@end
