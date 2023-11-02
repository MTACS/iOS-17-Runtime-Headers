
@protocol SPTrackingAvoidanceServiceProtocol <NSObject>

@required

- (void)acceptUTForBeaconUUID:(NSUUID *)arg1;
- (void)didDetectUnauthorizedTrackingWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didObserveUnauthorizedTrackingWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)didUpdateUnauthorizedTrackingWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPUnauthorizedTrackingObservation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didWithdrawUnauthorizedTrackingWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)ignoreBeaconByAdvertisement:(void *)arg1 until:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SPUnauthorizedTrackingAdvertisement *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)ignoreBeaconByUUID:(NSUUID *)arg1 until:(unsigned long long)arg2;
- (void)ignoreBeaconByUUID:(void *)arg1 until:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)ignoreBeaconByUUID:(void *)arg1 untilDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)ignoringUnauthorizedTrackingWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SPUnauthorizedTrackingAdvertisement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)playUnauthorizedSoundOnBeaconByUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)publishWildModeRecordsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unauthorizedTrackingTypeWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SPUnauthorizedTrackingAdvertisement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end
