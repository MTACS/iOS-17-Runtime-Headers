
@interface INJoinCallGroupConversationResolutionResult : INCallGroupConversationResolutionResult

+ (id)unsupportedForReason:(long long)arg1;

- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)initWithCallGroupConversationResolutionResult:(id)arg1;

@end
