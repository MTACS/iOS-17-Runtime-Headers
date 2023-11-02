
@protocol INDeleteEventIntentHandling <NSObject>

@required

- (void)handleDeleteEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INDeleteEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDeleteEventIntentResponse *, void*

@optional

- (void)confirmDeleteEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INDeleteEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDeleteEventIntentResponse *, void*
- (void)resolveDeleteAllOccurrencesForDeleteEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INDeleteEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveTargetEventIdentifierForDeleteEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INDeleteEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@end
