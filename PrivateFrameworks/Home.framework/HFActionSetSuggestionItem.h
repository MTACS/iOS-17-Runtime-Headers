
@interface HFActionSetSuggestionItem : HFItem <HFHomeKitItemProtocol> {
    HMActionSet * _actionSet;
    bool  _hasEverHadValidSuggestion;
    HMHome * _home;
    bool  _includeExistingActionSets;
    bool  _persistAddedSuggestions;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
}

@property (nonatomic, readonly) HMActionSet *actionSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasEverHadValidSuggestion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic) bool includeExistingActionSets;
@property (nonatomic) bool persistAddedSuggestions;
@property (nonatomic, copy) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)actionSet;
- (bool)hasEverHadValidSuggestion;
- (id)home;
- (id)homeKitObject;
- (bool)includeExistingActionSets;
- (id)init;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (bool)persistAddedSuggestions;
- (id)serviceLikeItem;
- (void)setHasEverHadValidSuggestion:(bool)arg1;
- (void)setIncludeExistingActionSets:(bool)arg1;
- (void)setPersistAddedSuggestions:(bool)arg1;
- (void)setServiceLikeItem:(id)arg1;

@end
