
@protocol PKPeerPaymentTargetDeviceDelegate

@required

- (void)downloadPassIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)registerDeviceWithRegistrationURL:(void *)arg1 pushToken:(void *)arg2 forceReregister:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSURL *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPeerPaymentAccount *, void*

@end
