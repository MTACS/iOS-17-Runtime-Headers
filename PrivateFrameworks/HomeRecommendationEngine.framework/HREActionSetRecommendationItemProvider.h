
@interface HREActionSetRecommendationItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    HRERecommendationItemProvider * _recommendationProvider;
    NSArray * _serviceLikeItems;
    HFTransformItemProvider * _transformItemProvider;
}

@property (nonatomic) unsigned long long engineOptions;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HRERecommendationItemProvider *recommendationProvider;
@property (nonatomic, readonly) NSArray *serviceLikeItems;
@property (nonatomic, retain) HFTransformItemProvider *transformItemProvider;

- (void).cxx_destruct;
- (unsigned long long)engineOptions;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1 andServiceLikeItems:(id)arg2;
- (id)items;
- (id)recommendationProvider;
- (id)reloadItems;
- (id)serviceLikeItems;
- (void)setEngineOptions:(unsigned long long)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setRecommendationProvider:(id)arg1;
- (void)setTransformItemProvider:(id)arg1;
- (id)suggestionItemTransformingRecommendationItem:(id)arg1;
- (id)transformItemProvider;

@end
