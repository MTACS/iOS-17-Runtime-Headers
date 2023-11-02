
@interface HUAssociatedSceneAndTriggerModule : HFItemModule {
    unsigned long long  _context;
    HMHome * _home;
    HFItem * _scenesItem;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
    HFStaticItemProvider * _staticItemProvider;
    HFItem * _triggersItem;
}

@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem *scenesItem;
@property (nonatomic, readonly, copy) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, readonly) HFItem *triggersItem;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (unsigned long long)context;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 serviceLikeItem:(id)arg3 context:(unsigned long long)arg4;
- (id)itemProviders;
- (id)scenesItem;
- (id)serviceLikeItem;
- (id)staticItemProvider;
- (id)triggersItem;

@end
