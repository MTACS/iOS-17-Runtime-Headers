
@protocol WBSCompletionListItem <NSObject>

@required

- (unsigned long long)engagementDestination;
- (NSString *)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (void)setParsecQueryID:(long long)arg1;
- (SFSearchResult *)sfSearchResultValue;

@optional

- (NSString *)lastSearchQuery;
- (void)setSiriSuggestion:(WBSQuerySuggestion *)arg1;
- (WBSQuerySuggestion *)siriSuggestion;

@end
