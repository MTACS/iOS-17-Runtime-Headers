
@interface ANAnalyticsDaily : NSObject <ANAnalyticsDailyProtocol> {
    <ANBackgroundActivityProtocol> * _backgroundActivity;
    <ANDefaultsProtocol> * _defaults;
    ANAnalyticsStorage * _eventStorage;
    <ANAnalyticsDailyHomesProvider> * _homesProvider;
    <ANAnalyticsDailyMessagingProtocol> * _messagingConnection;
    <ANAnalyticsDailyDelegate> * delegate;
}

@property (nonatomic, retain) <ANBackgroundActivityProtocol> *backgroundActivity;
@property (nonatomic, retain) <ANDefaultsProtocol> *defaults;
@property (nonatomic) <ANAnalyticsDailyDelegate> *delegate;
@property (nonatomic, readonly) ANAnalyticsStorage *eventStorage;
@property (nonatomic, retain) <ANAnalyticsDailyHomesProvider> *homesProvider;
@property (nonatomic, retain) <ANAnalyticsDailyMessagingProtocol> *messagingConnection;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_collectForAnnounce:(id)arg1;
- (void)_collectForAnnouncementsInHome:(id)arg1 completion:(id /* block */)arg2;
- (void)_collectForHome:(id)arg1 homes:(id)arg2;
- (void)_collectPayload:(id /* block */)arg1;
- (id)_dailyResponse;
- (void)_executeBackgroundActivity:(id /* block */)arg1;
- (bool)_isCoordinationDevice;
- (void)_recordExecutionTime;
- (void)_registerRapportDailyRequest;
- (void)_reportEventStorage;
- (void)_resetDailyAnnouncements;
- (id)_stringForDeferredResult:(long long)arg1;
- (void)announcementSent:(id)arg1 inHome:(id)arg2;
- (id)backgroundActivity;
- (id)defaults;
- (id)delegate;
- (id)eventStorage;
- (id)homesProvider;
- (id)init;
- (id)initWithBackgroundActivity:(id)arg1 defaults:(id)arg2 homesProvider:(id)arg3 messagingConnection:(id)arg4;
- (id)messagingConnection;
- (void)recordReachableHomes:(id)arg1;
- (void)setBackgroundActivity:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomesProvider:(id)arg1;
- (void)setMessagingConnection:(id)arg1;
- (void)start;

@end
