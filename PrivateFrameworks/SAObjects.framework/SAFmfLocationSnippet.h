
@interface SAFmfLocationSnippet : SAUISnippet

@property (nonatomic, copy) NSNumber *atRequestedLocation;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic, copy) NSString *proximity;
@property (nonatomic, copy) NSURL *searchContext;

+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)atRequestedLocation;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locations;
- (id)proximity;
- (id)searchContext;
- (void)setAtRequestedLocation:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setProximity:(id)arg1;
- (void)setSearchContext:(id)arg1;

@end
