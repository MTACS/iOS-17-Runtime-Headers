
@interface HUTriggerMediaItemModule : HFItemModule <HFItemHiding> {
    NSSet * _itemProviders;
    HFItem * _mediaRowItem;
    HFTriggerBuilder * _triggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *mediaRowItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_staticItems;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 itemUpdater:(id)arg2;
- (id)itemProviders;
- (id)mediaRowItem;
- (void)setMediaRowItem:(id)arg1;
- (id)triggerBuilder;

@end
