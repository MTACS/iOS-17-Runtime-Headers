
@interface HUStatusItemModule : HFItemModule <HFItemHiding> {
    HUDashboardContext * _context;
    NSTimer * _invalidationTimer;
    HFItem * _placeholderItem;
    HFStatusItemProvider * _statusItemProvider;
}

@property (nonatomic, retain) HUDashboardContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *invalidationTimer;
@property (nonatomic, retain) HFItem *placeholderItem;
@property (nonatomic, retain) HFStatusItemProvider *statusItemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateItemsIfNecessary;
- (id)_itemsToHideInSet:(id)arg1;
- (void)_updateInvalidationTimer;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)context;
- (id)initWithContext:(id)arg1 itemUpdater:(id)arg2;
- (id)invalidationTimer;
- (void)itemUpdaterDidFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)placeholderItem;
- (void)setContext:(id)arg1;
- (void)setInvalidationTimer:(id)arg1;
- (void)setPlaceholderItem:(id)arg1;
- (void)setStatusItemProvider:(id)arg1;
- (id)statusItemProvider;
- (id)statusItems;
- (void)updateNeedsInvalidation:(bool)arg1 forStatusItem:(id)arg2;

@end
