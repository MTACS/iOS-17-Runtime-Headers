
@interface HUAccessorySceneListContentItemManager : HUServiceGridItemManager {
    NSMutableDictionary * _committedActionBuildersByActionSetID;
    unsigned long long  _contentSource;
    bool  _persistAddedSuggestions;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
}

@property (nonatomic, readonly) NSMutableDictionary *committedActionBuildersByActionSetID;
@property (nonatomic, readonly) unsigned long long contentSource;
@property (nonatomic) bool persistAddedSuggestions;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;

+ (bool)_action:(id)arg1 involvesServiceLikeItem:(id)arg2;
+ (id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3;
+ (id)createItemProviderForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 persistAddedSuggestions:(bool)arg4;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_transformedUpdateOutcomeForItem:(id)arg1 proposedOutcome:(id)arg2;
- (id)actionSetBuilderForItem:(id)arg1;
- (id)commitSelectionChangesWithSelectedItems:(id)arg1;
- (id)committedActionBuildersByActionSetID;
- (unsigned long long)contentSource;
- (id)initWithDelegate:(id)arg1 contentSource:(unsigned long long)arg2 serviceLikeItem:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(bool)arg3 shouldShowSectionHeaders:(bool)arg4 itemProvidersCreator:(id /* block */)arg5;
- (bool)persistAddedSuggestions;
- (id)serviceLikeItem;
- (void)setPersistAddedSuggestions:(bool)arg1;
- (id)suggestionItemProvider;

@end
