
@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement> {
    <SXAdvertisementPlacementType> * _advertisement;
    <SXSuggestedArticlesPlacementType> * _suggestedArticles;
}

@property (nonatomic, readonly) <SXAdvertisementPlacementType> *advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXSuggestedArticlesPlacementType> *suggestedArticles;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)advertisement;
- (id)initWithAdvertisement:(id)arg1 suggestedArticles:(id)arg2;
- (id)suggestedArticles;

@end
