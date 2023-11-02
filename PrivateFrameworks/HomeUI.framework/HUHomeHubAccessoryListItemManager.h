
@interface HUHomeHubAccessoryListItemManager : HFItemManager {
    NSSet * _accessories;
}

@property (nonatomic, retain) NSSet *accessories;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemForAccessory:(id)arg1;
- (id)accessories;
- (id)initWithAccessories:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)setAccessories:(id)arg1;

@end
