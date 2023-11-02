
@interface HUNetworkConfigurationSettingsModuleController : HUItemModuleController <HUNetworkConfigurationSettingsModuleDelegate, HUTappableTextViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_presentNetworkConfigurationSettingsMismatchViewController;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)description;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)networkConfigurationSettingsModuleUpdateDidTimeout:(id)arg1;
- (void)tappableTextView:(id)arg1 tappedAtIndex:(unsigned long long)arg2 withAttributes:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
