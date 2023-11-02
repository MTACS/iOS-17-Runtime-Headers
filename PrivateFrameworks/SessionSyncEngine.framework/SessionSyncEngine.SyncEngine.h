
@interface SessionSyncEngine.SyncEngine : _TtCs12_SwiftObject {
    void _lock_pairedDevice;
    void _queue_didExhaustRetryTimer;
    void _queue_didFireMetadataExpirationTimer;
    void _queue_didFireRetryTimer;
    void _queue_didReceiveAckMessage;
    void _queue_didReceiveUnlockMessage;
    void _queue_syncState;
    void inflightDateByRequestIdentifier;
    void inflightExpirationTime;
    void inflightExpirationTimer;
    void inflightMetadata;
    void inflightMetadataByRequestIdentifier;
    void keybag;
    void keybagSubscription;
    void localDeviceIdentifierOverride;
    void lock;
    void metadataStore;
    void queue;
    void retryTimer;
    void role;
    void sourcesByZone;
    void syncService;
}

@end
