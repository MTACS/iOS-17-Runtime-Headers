
@protocol VGVirtualGarageActions

@required

- (void)virtualGarageAddVehicle:(VGVehicle *)arg1;
- (void)virtualGarageEndContinuousUpdates;
- (void)virtualGarageForceFetchAllVehicles;
- (void)virtualGarageGetGarageWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VGVirtualGarage *, NSError *, void*
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(void *)arg1 syncAcrossDevices:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VGVehicle *, NSError *, void*
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)virtualGarageOnboardVehicle:(VGVehicle *)arg1;
- (void)virtualGarageRemoveVehicle:(VGVehicle *)arg1;
- (void)virtualGarageSaveVehicle:(VGVehicle *)arg1;
- (void)virtualGarageSelectVehicle:(VGVehicle *)arg1;
- (void)virtualGarageSetAssumesFullCharge:(bool)arg1;
- (void)virtualGarageSetShouldUsePreferredNetworks:(bool)arg1 forVehicle:(VGVehicle *)arg2;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;

@end
