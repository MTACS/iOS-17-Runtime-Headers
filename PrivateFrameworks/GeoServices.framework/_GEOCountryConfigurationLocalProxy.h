
@interface _GEOCountryConfigurationLocalProxy : NSObject <CoreTelephonyClientDataDelegate, _GEOCountryConfigurationServerProxy> {
    id  _countryCodeOverrideChangeListener;
    CTXPCServiceSubscriptionContext * _currentDataContext;
    geo_isolater * _currentDataContextIsolation;
    <_GEOCountryConfigurationServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    <GEOCancellable> * _geoIPLookupTask;
    bool  _loadedCurrentDataContext;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _scheduledUpdateTimer;
    CoreTelephonyClient * _telephonyClient;
    struct __CTServerConnection { } * _telephonyServerConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkThrottlerOrScheduleUpdate:(id*)arg1;
- (void)_determineCurrentCountryCode:(id /* block */)arg1;
- (void)_determineGeoIPCountryCode:(id /* block */)arg1;
- (void)_postNotificationsForOldInfo:(id)arg1 newInfo:(id)arg2;
- (void)_reachabilityChanged:(id)arg1;
- (void)_scheduleUpdate:(double)arg1;
- (void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)currentDataSimChanged:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)servingNetworkChanged:(id)arg1;
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;

@end
