
@protocol MapsSuggestionsMeCardObserver <MapsSuggestionsObject>

@required

- (void)meCardReader:(id <MapsSuggestionsMeCardReader>)arg1 didUpdateMeCard:(MapsSuggestionsMeCard *)arg2;

@end
