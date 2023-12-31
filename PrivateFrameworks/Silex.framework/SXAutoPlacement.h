
@interface SXAutoPlacement : SXJSONObject <SXAutoPlacement>

@property (nonatomic, readonly) <SXAdvertisementPlacementType> *advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXSuggestedArticlesPlacementType> *suggestedArticles;
@property (readonly) Class superclass;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (id)description;

@end
