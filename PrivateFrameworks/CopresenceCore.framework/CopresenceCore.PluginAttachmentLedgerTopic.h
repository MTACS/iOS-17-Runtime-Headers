
@interface CopresenceCore.PluginAttachmentLedgerTopic : _TtCs12_SwiftObject {
    void _attachments;
    void _participants;
    void _state;
    void attachmentListeners;
    void attachmentStatusACKHandlers;
    void cancellables;
    void config;
    void dataCryptor;
    void internalState;
    void localParticipantID;
    void name;
    void pendingAttachments;
    void queue;
    void service;
    void shutdownReason;
    void subscribeStreamInput;
    void subscribeStreamResponseCancellable;
    void subscribeStreamRetryAttempts;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updateAttachmentsOperationListener;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updateAttachmentsOperationStream;
    void uploadToken;
}

@end
