
@interface PLClientLogAggregator : NSObject {
    NSMutableDictionary * _aggregatesCache;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSObject<OS_dispatch_source> * _flushTimer;
    NSObject<OS_os_log> * _logHandle;
    unsigned char  _numAggregates;
    unsigned char  _numAggregations;
}

@property (readonly) NSMutableDictionary *aggregatesCache;
@property (retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (retain) NSObject<OS_dispatch_source> *flushTimer;
@property (retain) NSObject<OS_os_log> *logHandle;
@property unsigned char numAggregates;
@property unsigned char numAggregations;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_aggregateForClientID:(id)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4;
- (id)_eventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4;
- (void)_flushToPowerLog;
- (bool)_isEventInputValid:(id)arg1 configuration:(id)arg2;
- (void)_scheduleFlushTimer;
- (bool)_setEventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4 value:(id)arg5;
- (bool)aggregateForClientID_async:(short)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4;
- (id)aggregatesCache;
- (void)cleanCache;
- (id)executionQueue;
- (id)flushTimer;
- (id)init;
- (id)logHandle;
- (unsigned char)numAggregates;
- (unsigned char)numAggregations;
- (void)setExecutionQueue:(id)arg1;
- (void)setFlushTimer:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setNumAggregates:(unsigned char)arg1;
- (void)setNumAggregations:(unsigned char)arg1;

@end
