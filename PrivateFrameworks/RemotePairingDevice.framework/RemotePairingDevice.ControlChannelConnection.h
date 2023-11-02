
@interface RemotePairingDevice.ControlChannelConnection : _TtCs12_SwiftObject {
    void _connectionSetupCompleteHandler;
    void _encryptionStream;
    void _invalidateCalled;
    void _mdmChallengeData;
    void _messageSequenceNumber;
    void _pairingSession;
    void _peerDeviceOptions;
    void _replyHandlers;
    void _transaction;
    void _userHasDeclinedPairing;
    void connectionSetupDidComplete;
    void customKeybagProvider;
    void invalidationHandler;
    void invalidationReason;
    void maxReconnectionAttempts;
    void options;
    void pairingDataStorageProvider;
    void peerDeviceInfo;
    void peerDeviceInfoUpdateHandler;
    void peerWireProtocolVersion;
    void queue;
    void requireUserConsentForPairing;
    void resolvedIdentity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startedAt;
    void state;
    void transport;
    void tunnelListenerCreator;
    void userInteractionProvider;
}

@end
