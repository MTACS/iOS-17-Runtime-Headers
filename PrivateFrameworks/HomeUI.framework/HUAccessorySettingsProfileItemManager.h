
@interface HUAccessorySettingsProfileItemManager : HFItemManager {
    HUAccessorySettingsProfileModule * _profileModule;
}

@property (nonatomic, retain) HUAccessorySettingsProfileModule *profileModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2;
- (id)profileModule;
- (void)setProfileModule:(id)arg1;

@end
