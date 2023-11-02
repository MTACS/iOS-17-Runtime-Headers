
@interface HUHomeHubSharedHomeWarningItemManager : HFItemManager {
    NSSet * _homes;
}

@property (nonatomic, retain) NSSet *homes;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)homes;
- (id)initWithDelegate:(id)arg1 homes:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)itemForHome:(id)arg1;
- (void)setHomes:(id)arg1;

@end
