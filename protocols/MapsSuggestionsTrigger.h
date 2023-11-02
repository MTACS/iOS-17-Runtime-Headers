
@protocol MapsSuggestionsTrigger <MapsSuggestionsObject, MapsSuggestionsJSONable>

@required

- (bool)hasObservers;
- (void)registerObserver:(id <MapsSuggestionsTriggerObserver>)arg1;
- (void)unregisterObserver:(id <MapsSuggestionsTriggerObserver>)arg1;

@end
