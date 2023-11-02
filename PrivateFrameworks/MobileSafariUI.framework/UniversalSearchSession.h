
@interface UniversalSearchSession : WBSParsecDSession

@property (nonatomic, readonly) WBSParsecDFeedbackDispatcher *feedbackDispatcher;

+ (id)sharedSession;
+ (bool)shouldUseSearchFoundation;

- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;

@end
