
@protocol CRSIconLayoutClientToServerInterface <NSObject>

@required

- (void)fetchApplicationIconInformationForBundleIdentifier:(void *)arg1 vehicleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CRSApplicationIcon *, NSError *, void*
- (void)fetchIconStateForVehicleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CRSIconLayoutState *, NSError *, void*
- (void)resetIconStateForVehicleID:(NSString *)arg1;
- (void)setIconState:(CRSIconLayoutState *)arg1 forVehicleID:(NSString *)arg2;

@end
