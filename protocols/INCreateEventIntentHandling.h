
@protocol INCreateEventIntentHandling <NSObject>

@required

- (void)handleCreateEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INCreateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INCreateEventIntentResponse *, void*

@optional

- (void)confirmCreateEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INCreateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INCreateEventIntentResponse *, void*
- (void)resolveDateTimeRangeForCreateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INCreateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsRangeResolutionResult *, void*
- (void)resolveLocationForCreateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INCreateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlacemarkResolutionResult *, void*
- (void)resolveParticipantsForCreateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INCreateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveTitleForCreateEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INCreateEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@end
