
@protocol SPFirmwareUpdateSessionPrivateProtocol <SPFirmwareUpdateSessionProtocol>

@required

- (void)beaconsInFirmwareUpdateState:(void *)arg1 dateInterval:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)firmwareUpdateStateForBeaconUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPFirmwareUpdateStateResult *, void*
- (void)initiateFirmwareUpdateForAllEligibleBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
