
@protocol INUpdateEventIntentHandling <NSObject>

@required

- (void)handleUpdateEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INUpdateEventIntentResponse *, void*

@optional

- (void)confirmUpdateEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INUpdateEventIntentResponse *, void*
- (void)resolveAddParticipantsForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveRemoveLocationForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveRemoveParticipantsForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSetDateTimeRangeForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsRangeResolutionResult *, void*
- (void)resolveSetLocationForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlacemarkResolutionResult *, void*
- (void)resolveSetTitleForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveTargetEventIdentifierForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveUpdateAllOccurrencesForUpdateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@end
