
@protocol _CompletionListRankingObserverFeedbackGenerator <NSObject>

@required

- (void)didAddItem:(id <WBSCompletionListItem>)arg1 hidingOutrankedResults:(NSArray *)arg2 hidingDuplicateResults:(NSArray *)arg3;
- (void)removeAllSectionsAndItems;

@optional

- (<_CompletionListRankingObserverFeedbackGeneratorDelegate> *)delegate;
- (void)didBeginRanking;
- (void)didBeginSectionWithBundleIdentifier:(NSString *)arg1;
- (void)didEndRanking;
- (void)setDelegate:(id <_CompletionListRankingObserverFeedbackGeneratorDelegate>)arg1;

@end
