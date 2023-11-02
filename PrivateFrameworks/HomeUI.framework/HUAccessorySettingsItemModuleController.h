
@interface HUAccessorySettingsItemModuleController : HUItemModuleController <HUSliderValueTableViewCellDelegate, HUStepperCellDelegate, HUSwitchCellDelegate> {
    NSMapTable * _cellToItemMap;
    <HUAccessorySettingsItemModuleControllerDelegate> * _delegate;
    NSMutableSet * _registeredButtonFutures;
}

@property (retain) NSMapTable *cellToItemMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAccessorySettingsItemModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUAccessorySettingsItemModule *module;
@property (retain) NSMutableSet *registeredButtonFutures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleButtonPress:(id)arg1;
- (void)_registerButtonActionHandler:(id)arg1 item:(id)arg2;
- (void)_selectOptionItem:(id)arg1;
- (void)_setupCellAccessoryType:(id)arg1 forItem:(id)arg2 withKey:(id)arg3;
- (void)_setupSliderCell:(id)arg1 forMinKey:(id)arg2 maxKey:(id)arg3;
- (void)_updateSwitchSettingItem:(id)arg1 withValue:(id)arg2;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)cellToItemMap;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (id)registeredButtonFutures;
- (void)setCellToItemMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredButtonFutures:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (void)stepperCell:(id)arg1 steppedToValue:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
