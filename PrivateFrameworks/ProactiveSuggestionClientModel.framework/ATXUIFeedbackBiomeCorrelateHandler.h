
@interface ATXUIFeedbackBiomeCorrelateHandler : BPSCorrelateHandler

+ (id)uiFeedbackCorrelateHandler;

- (bool)_proactiveSuggestionsContainEqualExecutablesWithSuggestion1:(id)arg1 suggestion2:(id)arg2;
- (id)boxedExecutableHashForProactiveSuggestion:(id)arg1;
- (id)correlateWithCurrentEvent:(id)arg1;
- (void)receiveCurrentEvent:(id)arg1;
- (void)receivePriorEvent:(id)arg1;
- (void)updateMostRecentlySeenBlendingUICacheUpdateUUID:(id)arg1;

@end
