
@protocol MapsSuggestionsJSONable <MapsSuggestionsAnyJSON>

@required

- (NSString *)nameForJSON;
- (<MapsSuggestionsNativeJSON> *)objectForJSON;

@end
