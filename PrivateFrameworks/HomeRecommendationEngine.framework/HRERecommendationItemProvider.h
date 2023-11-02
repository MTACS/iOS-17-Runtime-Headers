
@interface HRERecommendationItemProvider : HFItemProvider {
    HFAccessoryTypeGroup * _accessoryTypeGroup;
    id /* block */  _configureBlock;
    unsigned long long  _engineOptions;
    id /* block */  _filter;
    bool  _firstUpdateComplete;
    HMHome * _home;
    HRERecommendationEngine * _recommendationEngine;
    NSMutableSet * _recommendationItems;
    NSArray * _serviceLikeItems;
    bool  _updatesDisabled;
}

@property (nonatomic, readonly) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (nonatomic, copy) id /* block */ configureBlock;
@property (nonatomic) unsigned long long engineOptions;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic) bool firstUpdateComplete;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HRERecommendationEngine *recommendationEngine;
@property (nonatomic, retain) NSMutableSet *recommendationItems;
@property (nonatomic, readonly) NSArray *serviceLikeItems;
@property (nonatomic) bool updatesDisabled;

+ (id)_highestRankRecommendations:(id)arg1 forKeyGenerator:(id /* block */)arg2;
+ (id)filterRecommendations:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryTypeGroup;
- (id /* block */)configureBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)engineOptions;
- (id /* block */)filter;
- (bool)firstUpdateComplete;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 andAccessoryTypeGroup:(id)arg2;
- (id)initWithHome:(id)arg1 andServiceLikeItems:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)recommendationEngine;
- (id)recommendationItems;
- (id)reloadItems;
- (id)reloadItemsWithRecommendations:(id)arg1 filter:(id /* block */)arg2 itemMap:(id /* block */)arg3;
- (id)serviceLikeItems;
- (void)setConfigureBlock:(id /* block */)arg1;
- (void)setEngineOptions:(unsigned long long)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setFirstUpdateComplete:(bool)arg1;
- (void)setRecommendationEngine:(id)arg1;
- (void)setRecommendationItems:(id)arg1;
- (void)setUpdatesDisabled:(bool)arg1;
- (bool)updatesDisabled;

@end
