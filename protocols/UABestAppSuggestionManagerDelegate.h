
@protocol UABestAppSuggestionManagerDelegate <NSObject>

@optional

- (void)bestAppSuggestionChanged:(UABestAppSuggestion *)arg1;
- (void)bestAppSuggestionChanged:(UABestAppSuggestion *)arg1 withAdditionalSuggestions:(NSSet *)arg2;
- (void)bestAppSuggestionMayHaveChanged;
- (void)connectionInterrupted;

@end
