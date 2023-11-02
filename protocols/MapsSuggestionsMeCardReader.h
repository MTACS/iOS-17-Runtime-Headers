
@protocol MapsSuggestionsMeCardReader <MapsSuggestionsObject>

@required

- (BOOL)readMeCardWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MapsSuggestionsMeCard *, NSError *, void*
- (void)registerMeCardObserver:(id <MapsSuggestionsMeCardObserver>)arg1;
- (void)unregisterMeCardObserver:(id <MapsSuggestionsMeCardObserver>)arg1;

@end
