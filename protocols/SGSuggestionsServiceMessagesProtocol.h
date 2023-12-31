
@protocol SGSuggestionsServiceMessagesProtocol

@required

- (<SGMessagesSuggestionsServiceDelegate> *)delegate;
- (void)harvestedSuggestionsFromMessage:(void *)arg1 bundleIdentifier:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: CSSearchableItem *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, NSArray *, void*
- (void)harvestedSuggestionsFromMessage:(void *)arg1 bundleIdentifier:(void *)arg2 options:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: CSSearchableItem *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, SGSuggestions *, void*
- (void)harvestedSuggestionsFromMessages:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, NSArray *, NSArray *, void*
- (void)setDelegate:(id <SGMessagesSuggestionsServiceDelegate>)arg1;
- (void)suggestionsFromMessage:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CSSearchableItem *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, NSArray *, NSArray *, void*

@end
