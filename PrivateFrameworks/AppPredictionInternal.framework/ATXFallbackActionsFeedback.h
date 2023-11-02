
@interface ATXFallbackActionsFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)clientModelIds;
- (void)receiveUIFeedbackResult:(id)arg1;
- (void)receiveUIFeedbackResult:(id)arg1 histogramManager:(id)arg2;

@end
