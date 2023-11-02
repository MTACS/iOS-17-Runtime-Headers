
@interface HUAvailableTriggerItem : HFItem <HUTriggerLikeItem> {
    NSNumber * _activeValue;
    HMHome * _home;
    NSDictionary * _naturalLanguageTitleOptions;
    NSArray * _relatedServiceLikeItems;
    HFItem<HUTriggerLikeItem> * _sourceItem;
    HFTriggerNaturalLanguageOptions * _triggerNaturalLanguageOptions;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSNumber *activeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSDictionary *naturalLanguageTitleOptions;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *preferredRelatedItem;
@property (nonatomic, readonly) HRERecommendationItem *recommendationItem;
@property (nonatomic, retain) NSArray *relatedServiceLikeItems;
@property (nonatomic, readonly) HFItem<HUTriggerLikeItem> *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMTrigger *trigger;
@property (nonatomic, readonly) HFTriggerItem *triggerItem;
@property (nonatomic, retain) HFTriggerNaturalLanguageOptions *triggerNaturalLanguageOptions;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (void)_updateNaturalLanguageOptions;
- (id)activeValue;
- (id)buildersForActivating:(bool)arg1 inHome:(id)arg2 withContext:(id)arg3 serviceLikeItems:(id)arg4;
- (id)home;
- (id)identifier;
- (id)initWithHome:(id)arg1 containingItem:(id)arg2 relatedToServiceLikeItems:(id)arg3;
- (bool)isActive;
- (id)naturalLanguageTitleOptions;
- (id)preferredRelatedItem;
- (id)recommendationItem;
- (id)relatedServiceLikeItems;
- (id)removalTriggerBuildersForTriggers:(id)arg1 home:(id)arg2 context:(id)arg3 relatedItems:(id)arg4;
- (void)replaceSourceItem:(id)arg1;
- (void)resetActiveToDefault;
- (void)setActive:(bool)arg1;
- (void)setActiveValue:(id)arg1;
- (void)setNaturalLanguageTitleOptions:(id)arg1;
- (void)setRelatedServiceLikeItems:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setTriggerNaturalLanguageOptions:(id)arg1;
- (id)sourceItem;
- (id)trigger;
- (id)triggerItem;
- (id)triggerNaturalLanguageOptions;

@end
