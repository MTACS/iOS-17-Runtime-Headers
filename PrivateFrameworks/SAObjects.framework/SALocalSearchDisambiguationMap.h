
@interface SALocalSearchDisambiguationMap : SAUISnippet

@property (nonatomic, copy) NSArray *items;

+ (id)disambiguationMap;
+ (id)disambiguationMapWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:(id)arg1;

@end
