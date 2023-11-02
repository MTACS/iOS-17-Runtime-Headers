
@interface HUMediaServiceSettingsItemModuleController : HUItemModuleController {
    <HUMediaServiceSettingsItemModuleControllerDelegate> * _delegate;
}

@property (nonatomic) <HUMediaServiceSettingsItemModuleControllerDelegate> *delegate;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
