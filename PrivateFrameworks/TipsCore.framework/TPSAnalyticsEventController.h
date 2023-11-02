
@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable> {
    TPSAnalyticsDataProvider * _dataProvider;
    TPSDuetDataProvider * _duetDataProvider;
    _TPSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TPSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (id)analyticsQueue;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)dataProvider;
- (id)duetDataProvider;
- (id)exportedInterface;
- (void)logAnalyticsEvent:(id)arg1;
- (void)logAnalyticsEventFromTipsd:(id)arg1;
- (void)logAnalyticsEvents:(id)arg1;
- (void)logAnalyticsEventsFromTipsd:(id)arg1;
- (id)remoteInterface;
- (void)sendToCoreAnalytics:(id)arg1 eventName:(id)arg2;
- (void)setDataProvider:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
