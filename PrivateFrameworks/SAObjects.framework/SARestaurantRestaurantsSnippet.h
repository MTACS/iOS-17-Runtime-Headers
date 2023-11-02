
@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (nonatomic, copy) NSArray *attributionOrder;
@property (nonatomic, copy) NSArray *contributingProviderIds;
@property (nonatomic, copy) NSDictionary *providerPunchOutMap;
@property (nonatomic, copy) NSArray *restaurants;

+ (id)restaurantsSnippet;
+ (id)restaurantsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionOrder;
- (id)contributingProviderIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)providerPunchOutMap;
- (id)restaurants;
- (void)setAttributionOrder:(id)arg1;
- (void)setContributingProviderIds:(id)arg1;
- (void)setProviderPunchOutMap:(id)arg1;
- (void)setRestaurants:(id)arg1;

@end
