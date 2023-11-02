
@interface _LABKMatchPearlOperation : _LABKMatchOperation

@property (nonatomic, readonly) BKMatchPearlOperation *_BKMatchPearlOperation;
@property (nonatomic) <BKMatchPearlOperationDelegate> *delegate;

- (id)_BKMatchPearlOperation;
- (id)delegate;
- (void)matchOperation:(id)arg1 providedFaceOcclusionInfo:(id)arg2;
- (void)matchOperation:(id)arg1 providedFaceWUPoseEligibilityInfo:(id)arg2;
- (void)matchOperation:(id)arg1 providedFeedback:(long long)arg2;
- (void)matchOperation:(id)arg1 requestedPasscodeShortcutWithReason:(unsigned long long)arg2;

@end
