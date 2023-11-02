
@interface HUTriggerEventsItemModule : HFItemModule <HFItemHiding> {
    HFItem * _addEventButtonItem;
    bool  _hideAddEventButton;
    NSSet * _itemProviders;
    HFStaticItemProvider * _staticItemProvider;
    HFTriggerBuilder * _triggerBuilder;
    HUTriggerBuilderItem * _triggerBuilderItem;
    HFEventBuilderItemProvider * _triggerEventsItemProvider;
}

@property (nonatomic, retain) HFItem *addEventButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideAddEventButton;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;
@property (nonatomic, retain) HUTriggerBuilderItem *triggerBuilderItem;
@property (nonatomic, retain) HFEventBuilderItemProvider *triggerEventsItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProviders;
- (id)_itemsToHideInSet:(id)arg1;
- (id)addEventButtonItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)hideAddEventButton;
- (id)initWithTriggerBuilder:(id)arg1 itemUpdater:(id)arg2;
- (id)itemProviders;
- (void)setAddEventButtonItem:(id)arg1;
- (void)setHideAddEventButton:(bool)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setTriggerBuilderItem:(id)arg1;
- (void)setTriggerEventsItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)triggerBuilder;
- (id)triggerBuilderItem;
- (id)triggerEventsItemProvider;

@end
