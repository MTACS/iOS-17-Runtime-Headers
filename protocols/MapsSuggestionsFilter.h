
@protocol MapsSuggestionsFilter <MapsSuggestionsObject>

@required

+ (bool)isEnabled;

- (bool)shouldKeepEntry:(MapsSuggestionsEntry *)arg1;

@end
