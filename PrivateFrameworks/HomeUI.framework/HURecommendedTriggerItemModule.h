
@interface HURecommendedTriggerItemModule : HFItemModule <HFItemHiding> {
    id /* block */  _configureBlock;
    unsigned long long  _engineOptions;
    id /* block */  _filter;
    bool  _hideSectionHeaderTitle;
    HMHome * _home;
    long long  _maximumNumberOfShownRecommendations;
    HFStaticItem * _moreButtonItem;
    HRERecommendationItemProvider * _recommendationItemProvider;
}

@property (nonatomic, copy) id /* block */ configureBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long engineOptions;
@property (nonatomic, copy) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSectionHeaderTitle;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) long long maximumNumberOfShownRecommendations;
@property (nonatomic, retain) HFStaticItem *moreButtonItem;
@property (nonatomic, retain) HRERecommendationItemProvider *recommendationItemProvider;
@property (readonly) Class superclass;

+ (id /* block */)rankComparator;
+ (bool)shouldShowRecommendation:(id)arg1;

- (void).cxx_destruct;
- (id)_buildStaticItems;
- (unsigned long long)_effectiveRecommendationEngineOptionsWithOptions:(unsigned long long)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id /* block */)configureBlock;
- (unsigned long long)engineOptions;
- (id /* block */)filter;
- (bool)hideSectionHeaderTitle;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (long long)maximumNumberOfShownRecommendations;
- (id)moreButtonItem;
- (id)recommendationItemProvider;
- (void)setConfigureBlock:(id /* block */)arg1;
- (void)setEngineOptions:(unsigned long long)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setHideSectionHeaderTitle:(bool)arg1;
- (void)setMaximumNumberOfShownRecommendations:(long long)arg1;
- (void)setMoreButtonItem:(id)arg1;
- (void)setRecommendationItemProvider:(id)arg1;

@end
