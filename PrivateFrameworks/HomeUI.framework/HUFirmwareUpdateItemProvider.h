
@interface HUFirmwareUpdateItemProvider : HFItemProvider {
    id /* block */  _filter;
    bool  _hasProvidedInstructionsItem;
    HMHome * _home;
    HUInstructionsItem * _instructionsItem;
    HFItemProvider * _linkedApplicationItemProvider;
    NSSet * _linkedApplicationItems;
    unsigned long long  _style;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic) bool hasProvidedInstructionsItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUInstructionsItem *instructionsItem;
@property (nonatomic, retain) HFItemProvider *linkedApplicationItemProvider;
@property (nonatomic, retain) NSSet *linkedApplicationItems;
@property (nonatomic, readonly) unsigned long long style;

+ (id /* block */)itemComparator;
+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id /* block */)_effectiveFilter;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2;
- (id)_localizedDescriptionForAppName:(id)arg1 accessoriesWithFirmwareUpdates:(id)arg2 visibleAccessoryTileDisplayNames:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (bool)hasProvidedInstructionsItem;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 style:(unsigned long long)arg2;
- (id)instructionsItem;
- (id)invalidationReasons;
- (id)items;
- (id)linkedApplicationItemProvider;
- (id)linkedApplicationItems;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setHasProvidedInstructionsItem:(bool)arg1;
- (void)setInstructionsItem:(id)arg1;
- (void)setLinkedApplicationItemProvider:(id)arg1;
- (void)setLinkedApplicationItems:(id)arg1;
- (unsigned long long)style;

@end
