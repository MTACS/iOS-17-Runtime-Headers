
@interface GroupActivities.AttachmentLedgerTopic : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _attachments;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _topic;
    void dataCryptor;
    void lock;
    void name;
    void pluginGenerator;
    void pluginTopicCancellables;
    void retainRef;
    void retainRefOnStart;
    void retryInfo;
    void stateMachine;
    void subscribingCancellables;
    void waitingForTopicCancellables;
}

@end
