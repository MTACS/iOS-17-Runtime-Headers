
@protocol SiriSuggestionsAPI.XPCClientBridge

@required

- (void)connectionErrorWithError:(NSError *)arg1;
- (void)finalise;
- (void)sendSuggestionsWithSuggestions:(NSData *)arg1;

@end
