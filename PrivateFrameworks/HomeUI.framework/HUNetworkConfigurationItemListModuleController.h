
@interface HUNetworkConfigurationItemListModuleController : HUItemModuleController {
    unsigned long long  _style;
}

@property (nonatomic, readonly) unsigned long long style;

- (id)_viewControllerToPresentForNetworkConfigurationGroupItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 style:(unsigned long long)arg2;
- (id)presentNetworkConfigurationSettingsForItem:(id)arg1 animated:(bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)style;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
