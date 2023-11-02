
@interface TITypingSessionBenchmarkAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSessionAligned * _alignedSession;
    int  _alignedWords;
    int  _alignedWordsWithText;
    TITypingSession * _session;
    double  _sessionAlignmentConfidence;
    int  _sessionWords;
    int  _sessionWordsWithText;
    unsigned long long  _typingSessionConfidence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (void)dispatchEvent;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (id)init;
- (void)registerEventSpec;

@end
