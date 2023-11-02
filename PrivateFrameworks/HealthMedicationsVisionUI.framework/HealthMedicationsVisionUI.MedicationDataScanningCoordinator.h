
@interface HealthMedicationsVisionUI.MedicationDataScanningCoordinator : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void aggregatedResolutionResults;
    void allTranscripts;
    void cameraStartTime;
    void dataProvider;
    void dataSaturated;
    void healthStore;
    void lastUpdateTime;
    void lock;
    void mrcPendingSince;
    void mrcResults;
    void mrcSubject;
    void ndcParser;
    void processingTranscript;
    void pulseTimer;
    void resolutionCounter;
    void resolutionEngine;
    void scanner;
    void screenshots;
    void seenMRCs;
    void seenTranscripts;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionId;
    void sessionStartTime;
    void targetSessionEndTime;
    void transcriptsQueue;
    void unsupportedMRCs;
    void usedNgrams;
}

- (void)pulseTimerFiredWithTimer:(id)arg1;

@end
