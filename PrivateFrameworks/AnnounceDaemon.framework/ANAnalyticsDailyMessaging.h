
@interface ANAnalyticsDailyMessaging : NSObject <ANAnalyticsDailyMessagingProtocol> {
    <ANRapportConnectionProvider> * _rapportConnection;
}

@property (nonatomic, readonly) NSDictionary *devicesCountingAnnouncements;
@property (nonatomic, readonly) bool isDeviceAnalyticsCoordinator;
@property (nonatomic, readonly) <ANRapportConnectionProvider> *rapportConnection;

- (void).cxx_destruct;
- (id)devicesCountingAnnouncements;
- (id)init;
- (bool)isDeviceAnalyticsCoordinator;
- (id)rapportConnection;
- (void)registerDailyRequest:(id /* block */)arg1;
- (void)sendDailyRequest:(id)arg1 handler:(id /* block */)arg2;

@end
