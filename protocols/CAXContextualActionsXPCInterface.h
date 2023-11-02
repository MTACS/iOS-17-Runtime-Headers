
@protocol CAXContextualActionsXPCInterface

@required

- (void)processShortcutsActionSelectionGivenFeedbackEvent:(CAXContextualActionsFeedbackEvent *)arg1;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CAXContextualActionsFeedbackEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)processShortcutsSessionGivenSummary:(CAXShortcutsSessionSummary *)arg1;
- (void)processShortcutsSessionGivenSummary:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CAXShortcutsSessionSummary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
