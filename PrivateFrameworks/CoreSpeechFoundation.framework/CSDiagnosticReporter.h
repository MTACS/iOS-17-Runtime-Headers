
@interface CSDiagnosticReporter : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    SDRDiagnosticReporter * _reporter;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) SDRDiagnosticReporter *reporter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)queue;
- (id)reporter;
- (void)setQueue:(id)arg1;
- (void)setReporter:(id)arg1;
- (void)submitASRIssueReport:(id)arg1;
- (void)submitAudioIssueReport:(id)arg1;
- (void)submitAudioIssueReport:(id)arg1 withError:(id)arg2;
- (void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withDuration:(double)arg3 withContext:(id)arg4;
- (void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withSubTypeContext:(id)arg3 withDuration:(double)arg4 withContext:(id)arg5;
- (void)submitEndpointerIssueReport:(id)arg1;
- (void)submitRemoteCoreSpeechIssueReport:(id)arg1 context:(id)arg2;
- (void)submitSELFIssueReport:(id)arg1;
- (void)submitSiriPowerIssueReport:(id)arg1;
- (void)submitTrialIssueReport:(id)arg1;
- (void)submitUresIssueReport:(id)arg1;
- (void)submitVoiceIdIssueReport:(id)arg1;
- (void)submitVoiceTriggerIssueReport:(id)arg1;

@end
