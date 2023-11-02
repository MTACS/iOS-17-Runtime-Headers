
@interface HUHomeHubPersonalDeviceWarningItemManager : HFItemManager {
    NSSet * _devices;
}

@property (nonatomic, retain) NSSet *devices;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)devices;
- (id)initWithDelegate:(id)arg1 devices:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)itemForDevice:(id)arg1;
- (void)setDevices:(id)arg1;

@end
