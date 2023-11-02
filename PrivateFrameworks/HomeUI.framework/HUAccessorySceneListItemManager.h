
@interface HUAccessorySceneListItemManager : HFItemManager {
    HFItem * _existingScenesContentItem;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
    HFItem * _suggestedScenesContentItem;
}

@property (nonatomic, readonly) HFItem *existingScenesContentItem;
@property (nonatomic, readonly, copy) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, readonly) HFItem *suggestedScenesContentItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)existingScenesContentItem;
- (id)initWithDelegate:(id)arg1 serviceLikeItem:(id)arg2;
- (id)serviceLikeItem;
- (id)suggestedScenesContentItem;

@end
