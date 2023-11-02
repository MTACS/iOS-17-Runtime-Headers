
@interface HUTriggerDurationItemModule : HFItemModule <HFItemHiding> {
    HFItem * _durationPickerItem;
    bool  _durationPickerShown;
    HFTriggerDurationSummaryItem * _durationSummaryItem;
    HFItemManager * _itemManager;
    NSSet * _itemProviders;
    HFTriggerBuilder * _triggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFItem *durationPickerItem;
@property (nonatomic) bool durationPickerShown;
@property (nonatomic, retain) HFTriggerDurationSummaryItem *durationSummaryItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) HFItemManager *itemManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_buildItemProviders;
- (id)_itemsToHideInSet:(id)arg1;
- (bool)_shouldShowDurationItems;
- (id)_staticItems;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)durationPickerItem;
- (bool)durationPickerShown;
- (id)durationSummaryItem;
- (id)initWithTriggerBuilder:(id)arg1 itemUpdater:(id)arg2;
- (id)itemManager;
- (id)itemProviders;
- (void)setDurationPickerItem:(id)arg1;
- (void)setDurationPickerShown:(bool)arg1;
- (void)setDurationSummaryItem:(id)arg1;
- (void)setItemManager:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (id)triggerBuilder;

@end
