
@protocol SMSuggestionsStoreProtocol <NSObject>

@required

- (void)clearSuggestionsWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchSuggestionsCountWithOptions:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: SMSuggestionEnumerationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)fetchSuggestionsWithOptions:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: SMSuggestionEnumerationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)storeSuggestions:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
