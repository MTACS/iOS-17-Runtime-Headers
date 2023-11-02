
@protocol SGSuggestionsServiceIpsosProtocol

@required

- (NSArray *)ipsosMessagesFromSearchableItems:(NSArray *)arg1 error:(id*)arg2;
- (void)ipsosMessagesFromSearchableItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSString *)titleSuggestionForMessage:(SGIPMessage *)arg1 error:(id*)arg2;
- (void)titleSuggestionForMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGIPMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
