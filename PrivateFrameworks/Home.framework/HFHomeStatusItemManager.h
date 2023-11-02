
@interface HFHomeStatusItemManager : HFItemManager {
    NSTimer * _invalidationTimer;
    HMRoom * _room;
    HFStatusItemProvider * _statusItemProvider;
}

@property (nonatomic, retain) NSTimer *invalidationTimer;
@property (nonatomic, retain) HMRoom *room;
@property (nonatomic, retain) HFStatusItemProvider *statusItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (void)_invalidateItemsIfNecessary;
- (id)_itemsToHideInSet:(id)arg1;
- (bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (void)_updateInvalidationTimer;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithRoom:(id)arg1 delegate:(id)arg2;
- (id)invalidationTimer;
- (id)matchingItemForHomeKitObject:(id)arg1;
- (id)room;
- (void)setInvalidationTimer:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setStatusItemProvider:(id)arg1;
- (bool)shouldPerformInitialLoadOnMainThread;
- (id)statusItemProvider;
- (id)statusItems;
- (void)updateNeedsInvalidation:(bool)arg1 forStatusItem:(id)arg2;

@end
