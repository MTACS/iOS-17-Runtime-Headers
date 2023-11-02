
@interface MTPurchaseControllerWrapper : NSObject {
    void purchaseController;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)fetchChannelUpdatesCheckingEntitlementsNotification;
- (void)forceFetchLatestChannelUpdates;
- (id)init;
- (void)syncMusicSubscriptionInformation;

@end
