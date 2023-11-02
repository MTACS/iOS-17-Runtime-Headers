
@protocol MapsSuggestionsCircuit <MapsSuggestionsObject, MapsSuggestionsJSONable>

@required

- (void)addCondition:(id <MapsSuggestionsCondition>)arg1;
- (void)addTrigger:(id <MapsSuggestionsTrigger>)arg1;
- (void)removeCondition:(id <MapsSuggestionsCondition>)arg1;
- (void)removeTrigger:(id <MapsSuggestionsTrigger>)arg1;

@end
