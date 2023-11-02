
@interface WFAutomationSuggestionFeedbackManager : NSObject

+ (id)sharedManager;

- (id)init;
- (void)trackRoutineWithIdentifier:(id)arg1 source:(unsigned long long)arg2 completed:(bool)arg3 interacted:(bool)arg4;

@end
