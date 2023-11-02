
@interface CopresenceCore.PubSubTopic : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _subscriberSeqNums;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _subscribers;
    void _topicMetadata;
    void closedStreamsReason;
    void config;
    void cryptorUpdatedWhileInitializing;
    void dataCryptorCancellables;
    void dataCryptorProvider;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  firstSubscribeAttemptAt;
    void localParticipantID;
    void name;
    void pendingDecryptionQueue;
    void publishInput;
    void publishResponseCancellable;
    void publishStreamAttempt;
    void publishStreamState;
    void queue;
    void receiveQueue;
    void reporter;
    void reporterTag;
    void selfSeqNum;
    void selfSeqNumServerAcked;
    void sendQueue;
    void service;
    void shutdownFailsafeCancellable;
    void state;
    void subscribeInitializeInFlight;
    void subscribeInput;
    void subscribeMissingEncryptionIDsCancellable;
    void subscribeNotAuthorizedCancellable;
    void subscribeResponseCancellable;
    void subscribeStreamAttempt;
    void subscribeStreamState;
    void subscriberSeqNumsAcked;
    void upsertMetadataCancellables;
}

@end
