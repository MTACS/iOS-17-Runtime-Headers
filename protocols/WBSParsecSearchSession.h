
@protocol WBSParsecSearchSession <NSObject>

@required

- (<WBSParsecFeedbackDispatcher> *)feedbackDispatcher;
- (void)setCurrentQuery:(WBSCompletionQuery *)arg1;
- (void)setDelegate:(id <WBSParsecSearchSessionDelegate>)arg1;
- (void)setUIScale:(double)arg1;
- (double)uiScale;

@end
