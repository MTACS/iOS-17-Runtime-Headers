
@protocol CSUnlockRequesting <NSObject>

@required

- (<CSUnlockRequest> *)createUnlockRequest;
- (<CSUnlockRequest> *)createUnlockRequestForActionContext:(SBFLockScreenActionContext *)arg1;
- (void)unlockWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <CSUnlockRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
