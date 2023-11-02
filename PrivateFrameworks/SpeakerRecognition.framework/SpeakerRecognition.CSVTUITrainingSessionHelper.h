
@interface SpeakerRecognition.CSVTUITrainingSessionHelper : NSObject {
    void bestTriggerSampleStart;
    void extraSamplesAtStart;
    void keywordDetector;
    void locale;
    void numSamplesFed;
    void session;
    void sessionProcess;
    void sessionSuspended;
    void status;
    void trainingManagerHelper;
    void voiceTriggerEventInfo;
}

- (void).cxx_destruct;
- (void)closeSession;
- (id)handleAudioInputPayloadWithData:(id)arg1;
- (id)handleAudioInputWithData:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1 keywordDetector:(id)arg2 trainingManagerHelper:(id)arg3 session:(id)arg4;
- (void)resumeTraining;
- (bool)retrieveAndStoreUtteranceWithLocale:(id)arg1;
- (void)startTraining;
- (void)suspendTraining;

@end
