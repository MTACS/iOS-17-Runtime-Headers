
@interface TICandidateBarUsageAnalyzer : NSObject <TITypingSessionAnalyzing> {
    bool  _autocorrectionEnabled;
    bool  _continuousPathEnabled;
    TITypingSession * _currentSession;
    bool  _hwAutocorrectionEnabled;
    bool  _predictionEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (void)analyzeWordEntry:(id)arg1;
- (void)dispatchEventWithInputMethod:(unsigned long long)arg1 typingEngineType:(unsigned int)arg2 selectionType:(unsigned long long)arg3 keyboardState:(id)arg4;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (id)init;
- (void)registerEventSpec;
- (id)stringFromInputMethod:(unsigned long long)arg1;
- (id)stringFromSelectionType:(unsigned long long)arg1;

@end
