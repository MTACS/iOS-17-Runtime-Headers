
@interface Speech.SpeechRecognizerWorker : _TtCs12_SwiftObject {
    void _didFinalizeToRange;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  asrId;
    void audioBufferActor;
    void audioFormat;
    void clientInfo;
    void delegates;
    void enqueue;
    void measurements;
    void pauseResumeState;
    void pendingEagerResultRequests;
    void rangeOnAudioBuffer;
    void rangeOnAudioBufferReceivedByEAR;
    void recognitionStatistics;
    void recognitionUtterenceStatistics;
    void recognizerService;
    void resultStreamActor;
    void resumeContext;
    void scheduledFinalizations;
    void startTimeOnAudioBuffer;
    void supportedFeatures;
    void volatileRange;
}

@end
