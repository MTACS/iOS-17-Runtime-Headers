
@protocol CATSharingDeviceSession <NSObject>

@required

- (void)activate;
- (void)beginPairWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CATSharingFailureEvent> *, void*
- (void)deactivate;
- (id /* block */)deviceSessionErrorHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (id /* block */)deviceSessionInvalidatedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (id /* block */)deviceSessionReadyHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)isPaired;
- (bool)isReady;
- (id /* block */)messageReceivedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (id /* block */)pinPromptHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, <CATSharingDeviceSession> *, unsigned long long, void*, id, SEL
- (CATSharingDevice *)remoteDevice;
- (void)sendMessage:(NSDictionary *)arg1;
- (void)setDeviceSessionErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDeviceSessionInvalidatedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDeviceSessionReadyHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setMessageReceivedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setPinPromptHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CATSharingDeviceSession> *, unsigned long long, void*
- (void)tryPairingPIN:(NSString *)arg1;
- (void)verifyPairing:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
