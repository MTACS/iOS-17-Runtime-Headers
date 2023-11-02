
@interface MapsSuggestionsActionCircuit : NSObject <MapsSuggestionsCircuit, MapsSuggestionsTriggerObserver> {
    struct _Config { 
        NSString *name; 
        MapsSuggestionsObservers *observers; 
        <MapsSuggestionsAction> *action; 
        NSArray *triggers; 
        NSArray *conditions; 
        unsigned long long type; 
    }  _config;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _dispatchQueue;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    struct _State { 
        NSString *firedTriggerName; 
        NSString *failedConditionName; 
        NSError *lastError; 
        bool active; 
    }  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct Queue { id x1; id x2; } dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (void)addTrigger:(id)arg1;
- (void)awaitQueue;
- (void)dealloc;
- (id)description;
- (struct Queue { id x1; id x2; })dispatchQueue;
- (id)initWithAction:(id)arg1;
- (id)initWithTriggers:(id)arg1 action:(id)arg2;
- (id)initWithTriggers:(id)arg1 conditions:(id)arg2 action:(id)arg3;
- (id)initWithTriggers:(id)arg1 conditions:(id)arg2 type:(unsigned long long)arg3 action:(id)arg4;
- (id)nameForJSON;
- (id)objectForJSON;
- (void)registerObserver:(id)arg1;
- (void)removeCondition:(id)arg1;
- (void)removeTrigger:(id)arg1;
- (void)triggerFired:(id)arg1;
- (id)uniqueName;
- (void)unregisterObserver:(id)arg1;

@end
