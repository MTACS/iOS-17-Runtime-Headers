
@interface _DKNotificationWatchNearbyMonitor : _DKMonitor <_DKHistoricalMonitor, _DKInstantMonitor, _DKNotificationReceiver> {
    bool  _enabled;
    int  _token;
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

+ (id)_eventWithNearbyDeviceCount:(unsigned long long)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsWatchNearby:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void)deactivate;
- (void)dealloc;
- (void)receiveNotificationEvent:(id)arg1;
- (void)setWatchIsNearby;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
