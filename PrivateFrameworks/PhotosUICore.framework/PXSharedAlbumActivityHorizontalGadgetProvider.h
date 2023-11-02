
@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXForYouRankable> {
    PXFeedSectionInfosManager * _feedSectionInfosManager;
    PXInboxAggregateDataSourceManager * _inboxDataSourceManager;
}

@property (nonatomic, retain) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic, retain) PXInboxAggregateDataSourceManager *inboxDataSourceManager;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (bool)_areSharedStreamsEnabled;
- (long long)_countOfSectionInfosToDisplay:(unsigned long long)arg1;
- (id)_currentGadgetOfType:(unsigned long long)arg1;
- (id)_gadgetTitle;
- (void)_navigateToSharedAlbumActivityFeed:(id)arg1;
- (void)_updateGadgetTitle;
- (void)_updateGadgets;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)feedSectionInfosManager;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (long long)forYouContentIdentifier;
- (void)generateGadgets;
- (id)inboxDataSourceManager;
- (id)init;
- (id)mostRecentContentDate;
- (void)setFeedSectionInfosManager:(id)arg1;
- (void)setInboxDataSourceManager:(id)arg1;

@end
