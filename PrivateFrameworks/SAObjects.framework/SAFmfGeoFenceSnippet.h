
@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (nonatomic, retain) SAFmfGeoFence *aceFmfGeoFence;
@property (nonatomic, copy) NSNumber *enable;
@property (nonatomic, copy) NSString *fenceType;
@property (nonatomic, copy) NSNumber *oneTimeOnly;
@property (nonatomic, copy) NSURL *searchContext;

+ (id)geoFenceSnippet;
+ (id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceFmfGeoFence;
- (id)enable;
- (id)encodedClassName;
- (id)fenceType;
- (id)groupIdentifier;
- (id)oneTimeOnly;
- (id)searchContext;
- (void)setAceFmfGeoFence:(id)arg1;
- (void)setEnable:(id)arg1;
- (void)setFenceType:(id)arg1;
- (void)setOneTimeOnly:(id)arg1;
- (void)setSearchContext:(id)arg1;

@end
