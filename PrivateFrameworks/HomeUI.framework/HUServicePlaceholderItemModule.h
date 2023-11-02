
@interface HUServicePlaceholderItemModule : HFItemModule <HFItemHiding> {
    HUDashboardContext * _context;
    HFStaticItemProvider * _placeholderItemProvider;
}

@property (nonatomic, retain) HUDashboardContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFStaticItemProvider *placeholderItemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)arg1;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)context;
- (id)initWithContext:(id)arg1 itemUpdater:(id)arg2;
- (id)placeholderItemProvider;
- (void)setContext:(id)arg1;
- (void)setPlaceholderItemProvider:(id)arg1;

@end
