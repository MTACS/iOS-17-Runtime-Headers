
@interface NewsUI2.TodayFeedQuerySidecar : _TtCs12_SwiftObject <FCForYouQuerySidecar> {
    void $__lazy_storage_$_introToSportsTopicIDs;
    void $__lazy_storage_$_localNewsChannelIDs;
    void $__lazy_storage_$_newspaperChannelIDs;
    void localChannelsProvider;
    void paidAccessChecker;
    void tagController;
    void todayServiceConfig;
}

- (id)additionalChannelsToQuery;
- (id)additionalSectionIDsToQueryForChannel:(id)arg1;
- (id)additionalTopicsToQuery;
- (bool)shouldIncludePaidFeedForChannel:(id)arg1;

@end
