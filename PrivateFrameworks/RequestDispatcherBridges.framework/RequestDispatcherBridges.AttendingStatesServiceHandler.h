
@interface RequestDispatcherBridges.AttendingStatesServiceHandler : NSObject <LBAttendingStatesServiceDelegate> {
    void assistantId;
    void candidateRequestCacheManager;
    void messagePublisher;
    void queue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionId;
}

- (void).cxx_destruct;
- (id)init;
- (void)localAttendingStarted;
- (void)localAttendingStartedWithRootRequestId:(id)arg1;
- (void)localAttendingStoppedUnexpectedlyWithError:(id)arg1;
- (void)localAttendingWillStartWithRootRequestId:(id)arg1;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;
- (void)speechStartDetectedWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;
- (void)speechStartDetectedWithShouldDuckTTS:(bool)arg1;

@end
