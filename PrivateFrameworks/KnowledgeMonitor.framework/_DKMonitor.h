
@interface _DKMonitor : NSObject <_DKHistoricalMonitor, _DKInstantMonitor> {
    NSString * _bootSessionUUID;
    _DKEvent * _currentEvent;
    NSDate * _dateAtLastClockChange;
    id /* block */  _eventComparator;
    NSObject<OS_dispatch_queue> * _eventQueue;
    id /* block */  _filter;
    id /* block */  _historicalHandler;
    NSMutableDictionary * _historicalState;
    id /* block */  _instantHandler;
    NSMutableDictionary * _instantState;
    NSDate * _lastUpdate;
    NSObject<OS_os_log> * _log;
    unsigned long long  _machTimeAtLastClockChange;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _references;
    id /* block */  _shutdownHandler;
    NSDictionary * _state;
}

@property (nonatomic, readonly, copy) NSSet *classesForSecureStateDecoding;
@property (nonatomic, retain) _DKEvent *currentEvent;
@property (retain) NSDate *dateAtLastClockChange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventComparator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, copy) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalHandler;
@property (nonatomic, readonly) NSMutableDictionary *historicalState;
@property (nonatomic, copy) id /* block */ instantHandler;
@property (nonatomic, readonly) NSMutableDictionary *instantState;
@property (nonatomic, retain) NSDate *lastUpdate;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property unsigned long long machTimeAtLastClockChange;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long references;
@property (nonatomic, copy) id /* block */ shutdownHandler;
@property (readonly) Class superclass;

+ (id)entitlements;
+ (id)eventStream;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (id)classesForSecureStateDecoding;
- (id)currentEvent;
- (id)dateAtLastClockChange;
- (void)dealloc;
- (void)endCurrentEvent:(id)arg1;
- (id /* block */)eventComparator;
- (id)eventQueue;
- (id /* block */)filter;
- (id /* block */)historicalHandler;
- (id)historicalState;
- (bool)historicalStateHasChanged:(id)arg1;
- (id)init;
- (id /* block */)instantHandler;
- (bool)instantMonitorNeedsActivation;
- (bool)instantMonitorNeedsDeactivation;
- (id)instantState;
- (void)invalidateInstantState;
- (id)lastUpdate;
- (id)loadState;
- (id)log;
- (unsigned long long)machTimeAtLastClockChange;
- (id)queue;
- (long long)references;
- (void)saveState;
- (void)setCurrentEvent:(id)arg1;
- (void)setCurrentEvent:(id)arg1 inferHistoricalState:(bool)arg2;
- (void)setDateAtLastClockChange:(id)arg1;
- (void)setEventComparator:(id /* block */)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setHistoricalHandler:(id /* block */)arg1;
- (void)setInstantHandler:(id /* block */)arg1;
- (void)setLastUpdate:(id)arg1;
- (void)setMachTimeAtLastClockChange:(unsigned long long)arg1;
- (void)setShutdownHandler:(id /* block */)arg1;
- (id /* block */)shutdownHandler;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)systemClockDidChange:(id)arg1;
- (void)update;

@end
