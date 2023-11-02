
@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject <CATSharingDevicePairingTerminal> {
    bool  _invalidated;
    id /* block */  mBeginPairingCompletion;
    <CATSharingDeviceSession> * mDeviceSession;
    id /* block */  mPINPromptHandler;
    id /* block */  mVerifyPairingCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CATSharingDevice *device;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginPairing:(id /* block */)arg1 withCompletion:(id /* block */)arg2;
- (void)_invalidate;
- (void)_tryPIN:(id)arg1;
- (void)_verifyPairingAndFetchStableIdentifierWithCompletion:(id /* block */)arg1;
- (void)addSessionHandlers;
- (void)beginPairing:(id /* block */)arg1 withCompletion:(id /* block */)arg2;
- (id)device;
- (void)deviceSessionEncounteredError:(id)arg1;
- (void)deviceSessionInvalidated:(id)arg1;
- (void)deviceSessionReady;
- (void)fetchStableIdentifier;
- (void)fetchStableIdentifierFinished:(id)arg1;
- (id)initWithDeviceSession:(id)arg1;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (bool)isInvalidated;
- (void)pairingCompleteWithError:(id)arg1;
- (void)removeSessionHandlers;
- (void)sessionHasPromptedForPINWithWaitTime:(unsigned long long)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)tryPIN:(id)arg1;
- (void)vendConnectionForCompletion:(id /* block */)arg1;
- (void)verifyPairing;
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(id /* block */)arg1;
- (void)verifyPairingFinished:(bool)arg1;

@end
