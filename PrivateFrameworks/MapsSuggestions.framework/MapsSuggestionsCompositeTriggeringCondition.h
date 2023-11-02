
@interface MapsSuggestionsCompositeTriggeringCondition : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver> {
    NSArray * _conditions;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    NSArray * _triggers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (void)addConditions:(id)arg1;
- (void)addTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)dealloc;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)arg1 startState:(bool)arg2;
- (id)initWithName:(id)arg1 startState:(bool)arg2 behavior:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 startState:(bool)arg2 behavior:(unsigned long long)arg3 triggers:(id)arg4 conditions:(id)arg5;
- (id)initWithName:(id)arg1 startState:(bool)arg2 triggers:(id)arg3 conditions:(id)arg4;
- (bool)isTrue;
- (id)objectForJSON;
- (void)triggerFired:(id)arg1;

@end
