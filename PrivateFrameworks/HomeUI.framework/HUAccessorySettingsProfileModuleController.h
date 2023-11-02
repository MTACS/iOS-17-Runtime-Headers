
@interface HUAccessorySettingsProfileModuleController : HUItemModuleController <MCProfileViewControllerDelegate> {
    <HUAccessorySettingsProfileModuleControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAccessorySettingsProfileModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUAccessorySettingsProfileModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (bool)profileViewControllerIsProfileInstalled;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;

@end
