
@protocol MapsSuggestionsDeduper <MapsSuggestionsObject>

@required

+ (bool)isEnabled;

- (bool)dedupeByEnrichingEntry:(MapsSuggestionsEntry *)arg1 withEntry:(MapsSuggestionsEntry *)arg2;

@end
