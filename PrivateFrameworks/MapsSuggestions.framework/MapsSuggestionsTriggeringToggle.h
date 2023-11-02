
@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition, MapsSuggestionsTrigger> {
    unsigned long long  _behavior;
    bool  _state;
    unsigned long long  _timesUpdated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timesUpdated;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)description;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)arg1 startState:(bool)arg2;
- (id)initWithName:(id)arg1 startState:(bool)arg2 behavior:(unsigned long long)arg3;
- (bool)isTrue;
- (id)objectForJSON;
- (void)setState:(bool)arg1;
- (bool)state;
- (unsigned long long)timesUpdated;

@end
