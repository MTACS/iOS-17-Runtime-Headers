
@protocol FCForYouQuerySidecar

@required

- (NSArray *)additionalChannelsToQuery;
- (NSArray *)additionalSectionIDsToQueryForChannel:(id <FCChannelProviding>)arg1;
- (NSArray *)additionalTopicsToQuery;
- (bool)shouldIncludePaidFeedForChannel:(id <FCChannelProviding>)arg1;

@end
