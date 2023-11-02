
@interface ASDArcadeService : NSObject {
    ASDAppStoreService * _appstoreService;
}

+ (id)defaultService;

- (void).cxx_destruct;
- (void)addBadgeIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)addHardwareOfferIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)arg1;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)arg1;
- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)arg1;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)arg1;
- (void)badgeCountWithReplyHandler:(id /* block */)arg1;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)arg1;
- (id)init;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)arg1;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)arg1;
- (void)removeBadgeIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)removeHardwareOfferIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)removeMetricsForBadgeIDs:(id)arg1 replyHandler:(id /* block */)arg2;

@end
