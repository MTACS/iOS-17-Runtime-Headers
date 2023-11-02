
@interface APOdmlAssetManagerCoordinator : NSObject {
    NSMutableDictionary * _assetManagers;
    NSObject * _refreshClientNotificationObserver;
    NSOperationQueue * _refreshClientQueue;
    APOdmlUnfairLock * _refreshTrialLock;
    bool  _respondToRefreshNotification;
    TRIClient * _trialClient;
}

@property (nonatomic, readonly) NSMutableDictionary *assetManagers;
@property (nonatomic, retain) NSObject *refreshClientNotificationObserver;
@property (nonatomic, retain) NSOperationQueue *refreshClientQueue;
@property (nonatomic, readonly) APOdmlUnfairLock *refreshTrialLock;
@property bool respondToRefreshNotification;
@property (nonatomic, retain) TRIClient *trialClient;

+ (id)sharedAssetManagerCoordinator;

- (void).cxx_destruct;
- (id)assetManagerForPlacementType:(unsigned long long)arg1 assetManagerType:(unsigned long long)arg2;
- (id)assetManagers;
- (id)init;
- (void)initializeAssetManagersforPlacementTypes:(id)arg1;
- (id)refreshClientNotificationObserver;
- (id)refreshClientQueue;
- (void)refreshTrialClientForPlacementTypes:(id)arg1;
- (id)refreshTrialLock;
- (bool)respondToRefreshNotification;
- (void)setRefreshClientNotificationObserver:(id)arg1;
- (void)setRefreshClientQueue:(id)arg1;
- (void)setRespondToRefreshNotification:(bool)arg1;
- (void)setTrialClient:(id)arg1;
- (void)setUpdateHandlerForNamespace:(id)arg1;
- (id)trialClient;

@end
