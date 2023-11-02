
@interface DSRemotePairing.DSRemotePairing : NSObject

- (id)getPairedDevicesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)removeAllPairedDevicesWithInvokingCompletionHandlerOn:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSelectedDevices:(id)arg1 invokingCompletionHandlerOn:(id)arg2 completion:(id /* block */)arg3;

@end
