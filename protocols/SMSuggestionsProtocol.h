
@protocol SMSuggestionsProtocol <NSObject>

@required

- (void)fetchMostLikelyReceiverHandlesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchMostLikelySessionDestinationsWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTPlaceInference *, NSArray *, NSError *, void*
- (void)fetchShouldShowProactiveSuggestionsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchSuggestedSessionConfigurationWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SMSessionConfiguration *, NSError *, void*
- (void)launchSessionInitiationUIWithConfiguration:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)runProactiveSuggestionsEngineWithContext:(void *)arg1 shouldStoreSuggestions:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: id, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)shouldShowKeyboardSuggestionsForInitiator:(void *)arg1 receiver:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: SMHandle *, SMHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)shouldShowTipKitSuggestionsForInitiator:(void *)arg1 receiver:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: SMHandle *, SMHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)showSuggestionsDetectionUIWithSuggestion:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: SMSuggestion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
