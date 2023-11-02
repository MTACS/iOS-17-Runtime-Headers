
@interface GroupActivities.LinkManager : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _attachmentLedgerTopic;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _attachments;
    void cancellables;
    void featureFlags;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  groupUUID;
    void hasConnectedOnce;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void invalidationHandler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  localParticipant;
    void lock;
    void onFirstConnectedHandler;
    void pendingLocalAttachments;
    void receivedDataHandler;
    void requestEncryptionKeysHandler;
    void state;
    void topic;
    void unreliableMessenger;
    void unreliableMessengerConfig;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
