
@interface TIAutocorrectionAccuracyAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSession * _currentSession;
}

@property (nonatomic, retain) TITypingSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (bool)analyzeWordEntryAligned:(id)arg1;
- (id)currentSession;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (id)init;
- (void)registerEventSpec;
- (void)setCurrentSession:(id)arg1;

@end
