
@protocol STTimeAllowancesViewModelCoordinator <NSObject>

@required

+ (bool)saveAllowance:(STAllowance *)arg1 forUser:(STCoreUser *)arg2 error:(id*)arg3;

- (long long)currentDowntimeState;
- (void)deleteAllowance:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAllowance *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)isDowntimeActive;
- (void)respondToAskForTime:(void *)arg1 withApproval:(void *)arg2 timeApproved:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: STUIAskForTimeRequestResponse *, bool, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveAllAllowancesEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveAllowance:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAllowance *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveAlwaysAllowList:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAlwaysAllowList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveDefaultAlwaysAllowListWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveDeviceBedtime:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STDeviceBedtime *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (double)timeToNextExpectedStateChange;
- (void)toggleDowntimeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (STTimeAllowancesViewModel *)viewModel;

@end
