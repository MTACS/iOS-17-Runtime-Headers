
@protocol INFindEventsIntentHandling <NSObject>

@required

- (void)handleFindEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INFindEventsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INFindEventsIntentResponse *, void*

@optional

- (void)confirmFindEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INFindEventsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INFindEventsIntentResponse *, void*
- (void)resolveDateTimeRangeForFindEvents:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INFindEventsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsRangeResolutionResult *, void*
- (void)resolveLocationForFindEvents:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INFindEventsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlacemarkResolutionResult *, void*
- (void)resolveParticipantsForFindEvents:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INFindEventsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveRequestedEventAttributeForFindEvents:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INFindEventsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INEventAttributeResolutionResult *, void*
- (void)resolveSearchQueryForFindEvents:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INFindEventsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@end
