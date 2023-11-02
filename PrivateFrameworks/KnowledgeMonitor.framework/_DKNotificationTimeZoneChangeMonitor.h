
@interface _DKNotificationTimeZoneChangeMonitor : _DKMonitor <_DKHistoricalMonitor, _DKInstantMonitor, _DKNotificationReceiver> {
    bool  _cancel;
    NSObject<OS_dispatch_queue> * _donationQueue;
    bool  _enabled;
    double  _lastUpdate;
    bool  _resumed;
    BMDeviceTimeZone * _timeZone;
}

@property (nonatomic, readonly) _DKEvent *currentEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalHandler;
@property (nonatomic, copy) id /* block */ instantHandler;
@property (nonatomic, readonly) NSDate *lastUpdate;
@property (nonatomic, copy) id /* block */ shutdownHandler;
@property (readonly) Class superclass;

+ (id)eventStream;
+ (id)log;

- (void).cxx_destruct;
- (void)_updateWithTimeZone:(id)arg1 timestamp:(double)arg2;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (void)enqueueTimeZoneUpdate;
- (id)init;
- (void)receiveNotificationEvent:(id)arg1;
- (void)start;
- (void)stop;

@end
