
@interface SPUIFeedbackManager : NSObject

+ (void)cardViewDidDisappearWithEvent:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2;
+ (void)didAppearFromSource:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2 queryString:(id)arg3;
+ (void)didClearInputWithEvent:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2;
+ (void)didDisappearWithReason:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2;
+ (id)feedbackListener;
+ (void)flushFeedbackWithCompletion:(id /* block */)arg1;

@end
