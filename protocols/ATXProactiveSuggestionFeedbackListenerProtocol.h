
@protocol ATXProactiveSuggestionFeedbackListenerProtocol <NSObject>

@required

- (NSSet *)clientModelIds;

@optional

- (void)receiveUIFeedbackResult:(ATXProactiveSuggestionUIFeedbackResult *)arg1;

@end
