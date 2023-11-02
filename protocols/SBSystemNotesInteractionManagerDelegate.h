
@protocol SBSystemNotesInteractionManagerDelegate <NSObject>

@required

- (void)interactionManager:(SBSystemNotesInteractionManager *)arg1 requestsNotesDismissalForSource:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)interactionManager:(SBSystemNotesInteractionManager *)arg1 requestsPresentationWithContext:(SBSystemNotesContentPresentationContext *)arg2;
- (void)interactionManager:(SBSystemNotesInteractionManager *)arg1 requestsStartSuppressingKeyboardForReason:(NSString *)arg2;
- (<BSInvalidatable> *)interactionManager:(SBSystemNotesInteractionManager *)arg1 requestsStashAssertionForReason:(NSString *)arg2;
- (void)interactionManager:(SBSystemNotesInteractionManager *)arg1 requestsStopSuppressingKeyboardForReason:(NSString *)arg2;
- (void)interactionManager:(SBSystemNotesInteractionManager *)arg1 requestsUpdatePresentationMode:(long long)arg2;

@end
