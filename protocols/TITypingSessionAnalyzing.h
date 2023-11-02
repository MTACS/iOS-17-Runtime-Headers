
@protocol TITypingSessionAnalyzing <NSObject>

@required

- (bool)analyzeSession:(TITypingSession *)arg1 alignedSession:(TITypingSessionAligned *)arg2 withConfidence:(unsigned long long)arg3;
- (unsigned long long)evaluateConfidenceInSession:(TITypingSession *)arg1 alignedSession:(TITypingSessionAligned *)arg2;

@end
