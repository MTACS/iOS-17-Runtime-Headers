
@interface HFActionSetSuggestionItemProvider : HFItemProvider {
    NSSet * _customSuggestionItems;
    bool  _hasProvidedStaticSuggestionItems;
    HMHome * _home;
    bool  _includeCustomActionSets;
    bool  _includeExistingActionSets;
    bool  _persistAddedSuggestions;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
    NSSet * _staticSuggestionItems;
}

@property (nonatomic, retain) NSSet *customSuggestionItems;
@property (nonatomic) bool hasProvidedStaticSuggestionItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool includeCustomActionSets;
@property (nonatomic) bool includeExistingActionSets;
@property (nonatomic) bool persistAddedSuggestions;
@property (nonatomic, copy) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, retain) NSSet *staticSuggestionItems;

- (void).cxx_destruct;
- (id)_builtInActionSetOfType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customSuggestionItems;
- (bool)hasProvidedStaticSuggestionItems;
- (id)home;
- (bool)includeCustomActionSets;
- (bool)includeExistingActionSets;
- (id)initWithHome:(id)arg1;
- (id)items;
- (bool)persistAddedSuggestions;
- (id)reloadItems;
- (id)serviceLikeItem;
- (void)setCustomSuggestionItems:(id)arg1;
- (void)setHasProvidedStaticSuggestionItems:(bool)arg1;
- (void)setIncludeCustomActionSets:(bool)arg1;
- (void)setIncludeExistingActionSets:(bool)arg1;
- (void)setPersistAddedSuggestions:(bool)arg1;
- (void)setServiceLikeItem:(id)arg1;
- (void)setStaticSuggestionItems:(id)arg1;
- (id)staticSuggestionItems;

@end
