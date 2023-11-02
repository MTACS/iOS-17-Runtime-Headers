
@interface MapsSuggestionsEngineRunner : NSObject <MapsSuggestionsCircuit, MapsSuggestionsSink, MapsSuggestionsTriggerObserver> {
    struct _Config { 
        NSString *name; 
        MapsSuggestionsEngineBuilder *engineBuilder; 
        MapsSuggestionsObservers *observers; 
        GEOAutomobileOptions *automobileOptions; 
        double minRunTime; 
        double maxRunTime; 
        double minSleepTime; 
        double maxSleepTime; 
        double leewayRunTime; 
        double leewaySleepTime; 
        NSMutableArray *triggers; 
        NSMutableArray *conditions; 
        NSMutableSet *filters; 
        unsigned long long maxEntries; 
        bool nilledWhenAsleep; 
    }  _config;
    MapsSuggestionsEngine * _engine;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    struct _State { 
        NSDate *minSilenceDate; 
        NSDate *earliestRunDate; 
        NSString *firedTriggerName; 
        NSString *failedConditionName; 
        <MapsSuggestionsTimer> *stopRunTimer; 
        <MapsSuggestionsTimer> *wakeUpTimer; 
        NSArray *entries; 
    }  _state;
    <MapsSuggestionsTimer> * _wakeUpTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MapsSuggestionsEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic, readonly) <MapsSuggestionsTimer> *wakeUpTimer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (void)addConditions:(id)arg1;
- (void)addPostFilter:(id)arg1;
- (void)addTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (id)engine;
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 maxEntries:(unsigned long long)arg7;
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(bool)arg10;
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(bool)arg10 wakeUpTimerClass:(Class)arg11;
- (id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(bool)arg10 wakeUpTimerClass:(Class)arg11 stopRunTimerClass:(Class)arg12;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;
- (id)nameForJSON;
- (id)objectForJSON;
- (void)registerObserver:(id)arg1;
- (void)removeCondition:(id)arg1;
- (void)removeConditions:(id)arg1;
- (void)removeTrigger:(id)arg1;
- (void)removeTriggers:(id)arg1;
- (void)runASAP;
- (void)scheduleNextRun;
- (void)triggerFired:(id)arg1;
- (id)uniqueName;
- (id)wakeUpTimer;

@end
