
@interface _DKNotificationScreenLockImputedMonitor : _DKMonitor <_DKHistoricalMonitor, _DKInstantMonitor, _DKNotificationReceiver> {
    bool  _enabled;
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

+ (id)_eventWithState:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsLocked:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void)deactivate;
- (void)dealloc;
- (id)fetchMostRecentScreenLockStateEventFromKnowledgeStore;
- (void)receiveNotificationEvent:(id)arg1;
- (void)setCurrentEventInInstantStateUsingLastKnowledgeStoreEvent;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
