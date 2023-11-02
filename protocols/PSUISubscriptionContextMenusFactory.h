
@protocol PSUISubscriptionContextMenusFactory

@required

- (PSUICoreTelephonyCallCache *)createCallCache;
- (PSUICallingSubgroup *)createCallingSubgroup;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSUICarrierSpaceGroup *)createCarrierSpaceSubgroup;
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUICoreTelephonyDataCache *)createDataCache;
- (PSUIDataModeSubgroup *)createDataModeSubgroupWithContext:(CTXPCServiceSubscriptionContext *)arg1;
- (PSUIMyNumberSubgroup *)createMyNumberSubgroup;
- (PSUINetworkSelectionSubgroup *)createNetworkSelectionSubgroup;
- (PSUINetworkSettingsSubgroup *)createNetworkSettingsSubgroup;
- (PSUIDevicePasscodeState *)createPasscodeStatusCache;
- (PSUIRoamingSpecifiersSubgroup *)createRoamingSpecifiersSubgroupWithServiceDescriptor:(CTServiceDescriptor *)arg1;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUISIMSubgroup *)createSimSubgroup;
- (PSSpecifier *)groupSpecifier;
- (PSListController *)hostController;
- (PSSpecifier *)parentSpecifier;
- (bool)shouldPopViewControllerOnPlanRemoval;

@end
