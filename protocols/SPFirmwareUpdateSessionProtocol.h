
@protocol SPFirmwareUpdateSessionProtocol <NSObject>

@required

- (void)candidateBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)connectionTokensForBeaconUUID:(void *)arg1 dateInterval:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)updateBeaconUUID:(void *)arg1 firmwareUpdateState:(void *)arg2 systemVersion:(void *)arg3 error:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSUUID *, long long, NSString *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
