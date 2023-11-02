
@interface INCallGroupConversationResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCallGroupConversationToConfirm:(id)arg1;
+ (id)disambiguationWithCallGroupConversationsToDisambiguate:(id)arg1;
+ (id)successWithResolvedCallGroupConversation:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
