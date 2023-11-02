
@interface RealityFoundation.OutputPublisherMonitor : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_sessionID;
    void _internalProcessingCompleteReceived;
    void onInternalProcessingComplete;
    void onOutput;
    void onProcessingCancelled;
    void onProcessingComplete;
    void onPublishOutputMessage;
    void onTermination;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  outputs;
    void serialOutputQueue;
    void session;
    void subscription;
    void tasks;
}

@end
