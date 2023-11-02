
@interface MPCPlaybackEngineEventStream : NSObject {
    MSVSQLDatabaseTransaction * _activeTransaction;
    NSCountedSet * _cacheHits;
    NSCountedSet * _cacheMisses;
    NSMutableArray * _cachedEvents;
    MSVSQLDatabase * _database;
    NSHashTable * _deferralAssertions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deferralAssertionsLock;
    int  _deferralDebugToken;
    NSString * _engineID;
    bool  _ignorePerformanceDeferralAssertions;
    bool  _invalidated;
    NSDate * _nextScheduledFlush;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _scheduledFlushes;
    NSMutableArray * _subscriptions;
    <MPCPlabackEngineEventStreamTestingDelegate> * _testingDelegate;
}

@property (nonatomic, readonly) NSString *engineID;
@property (nonatomic, readonly) MPCPlaybackEngineEvent *lastEvent;
@property (nonatomic) <MPCPlabackEngineEventStreamTestingDelegate> *testingDelegate;

- (void).cxx_destruct;
- (void)addConsumer:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)emitEventType:(id)arg1 payload:(id)arg2;
- (void)emitEventType:(id)arg1 payload:(id)arg2 atTime:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })arg3;
- (id)engineID;
- (id)eventDeliveryDeferralAssertionOfType:(long long)arg1 forReason:(id)arg2;
- (id)eventDeliveryDeferralAssertionOfType:(long long)arg1 forReason:(id)arg2 withTimeout:(double)arg3;
- (void)flushEvents;
- (void)flushEventsWithConsumer:(id)arg1 fromTimestamp:(unsigned long long)arg2 untilTimestamp:(unsigned long long)arg3;
- (id)initWithDatabaseCreationBlock:(id /* block */)arg1;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (id)lastEvent;
- (id)lastEventsWithCount:(long long)arg1;
- (void)removeConsumer:(id)arg1;
- (void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)arg1;
- (void)scheduleInvalidation;
- (void)setMaximumEventDeliveryTimestamp:(unsigned long long)arg1;
- (void)setTestingDelegate:(id)arg1;
- (id)testingDelegate;

@end
