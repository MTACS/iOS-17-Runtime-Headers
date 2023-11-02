
@protocol PPQuickTypeServantProtocol

@required

- (NSArray *)quickTypeItemsWithQuery:(PPQuickTypeQuery *)arg1 limit:(unsigned long long)arg2 explanationSet:(PPQuickTypeExplanationSet *)arg3;

@optional

- (void)registerFeedback:(PPBaseFeedback *)arg1;

@end
