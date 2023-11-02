
@interface ATXProactiveSuggestionFeedbackResultRouter : NSObject {
    NSDictionary * _feedbackListeners;
}

- (void).cxx_destruct;
- (void)_initializeFeedbackListenersDictWith:(id)arg1;
- (id)clientModelIdsWithFeedbackListeners;
- (void)handleNewFeedbackResult:(id)arg1;
- (id)init;
- (id)initWithFeedbackListeners:(id)arg1;

@end
