
@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUSwitchCellDelegate> {
    bool  _onlyShowDeviceSwitches;
    HUPersonalRequestsDevicesModuleController * _prDevicesModuleController;
    HUPersonalRequestsEditorItemManager * _prEditorItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool onlyShowDeviceSwitches;
@property (nonatomic, readonly) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (nonatomic, retain) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)initWithUserItem:(id)arg1 onlyShowDeviceSwitches:(bool)arg2;
- (id)initWithUserItem:(id)arg1 sourceMediaProfileContainer:(id)arg2 onlyShowDeviceSwitches:(bool)arg3;
- (id)itemModuleControllers;
- (bool)onlyShowDeviceSwitches;
- (id)prDevicesModuleController;
- (id)prEditorItemManager;
- (void)setOnlyShowDeviceSwitches:(bool)arg1;
- (void)setPrEditorItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
