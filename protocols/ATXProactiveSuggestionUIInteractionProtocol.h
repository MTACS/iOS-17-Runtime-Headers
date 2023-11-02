
@protocol ATXProactiveSuggestionUIInteractionProtocol <NSSecureCoding, BMStoreData, ATXProtoBufWrapper>

@required

- (NSUUID *)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;
- (unsigned char)consumerSubTypeForUIStream;
- (NSString *)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (NSArray *)sessionProcessingOptionsForSessionType:(long long)arg1;

@optional

- (void)updateSingleSuggestionSessionContext:(id)arg1;
- (void)updateUIFeedbackSession:(ATXProactiveSuggestionUIFeedbackSession *)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (void)updateWidgetRotationSession:(ATXProactiveSuggestionWidgetRotationFeedbackSession *)arg1;

@end
