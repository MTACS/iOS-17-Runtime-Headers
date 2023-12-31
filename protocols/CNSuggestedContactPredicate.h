
@protocol CNSuggestedContactPredicate <NSObject>

@optional

- (NSArray *)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id <SGSuggestionsServiceContactsProtocol>)arg3 error:(id*)arg4;
- (NSArray *)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id <SGSuggestionsServiceContactsProtocol>)arg3 error:(id*)arg4;

@end
