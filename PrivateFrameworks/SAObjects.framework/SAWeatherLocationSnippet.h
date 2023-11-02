
@interface SAWeatherLocationSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *weatherLocations;

+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setWeatherLocations:(id)arg1;
- (id)weatherLocations;

@end
