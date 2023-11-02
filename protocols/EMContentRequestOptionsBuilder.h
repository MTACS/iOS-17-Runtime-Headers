
@protocol EMContentRequestOptionsBuilder

@required

- (bool)includeCachedMetadataJSON;
- (long long)includeSuggestionItems;
- (long long)networkUsage;
- (bool)requestAllHeaders;
- (NSArray *)requestedHeaderKeys;
- (NSString *)requestedRepresentation;
- (void)setIncludeCachedMetadataJSON:(bool)arg1;
- (void)setIncludeSuggestionItems:(long long)arg1;
- (void)setNetworkUsage:(long long)arg1;
- (void)setRequestAllHeaders:(bool)arg1;
- (void)setRequestedHeaderKeys:(NSArray *)arg1;
- (void)setRequestedRepresentation:(NSString *)arg1;

@end
