
@protocol HDWorkoutSessionSyncController <NSObject>

@required

- (void)receivedMirroringStopRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendBackgroundRuntimeRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendCurrentActivityUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKWorkoutActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendDataToRemoteWorkoutSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendEventUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKWorkoutEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendMirroringStartRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendMirroringStopRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendStateEvent:(void *)arg1 date:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendStateUpdate:(void *)arg1 date:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (HDCodableWorkoutSessionConfiguration *)sessionConfiguration;
- (HDCodableWorkoutSessionGlobalState *)sessionGlobalState;

@end
