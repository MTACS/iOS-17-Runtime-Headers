
@interface MAAutoAssetPushNotificationHistory : NSObject {
    NSArray * _notificationHistory;
}

@property (nonatomic, retain) NSArray *notificationHistory;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_historyURL;
- (bool)_loadHistoryWithError:(id*)arg1;
- (bool)addNotificationsToHistory:(id)arg1 withError:(id*)arg2;
- (bool)clearHistoryWithError:(id*)arg1;
- (id)init;
- (id)notificationHistory;
- (void)setNotificationHistory:(id)arg1;

@end
