
@interface GroupActivities.Topic : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _subscribedParticipants;
    void cancellables;
    void catchupNeededHandler;
    void dataCryptor;
    void delegate;
    void invalidationHandler;
    void name;
    void pendingMessages;
    void pendingMessagesLock;
    void pubSubStateChangedHandler;
    void pubSubTopicGenerator;
    void receivedDataHandler;
    void requestEncryptionKeysHandler;
    void seqNumWatermark;
    void stateMachine;
    void subscription;
    void topic;
}

@end
