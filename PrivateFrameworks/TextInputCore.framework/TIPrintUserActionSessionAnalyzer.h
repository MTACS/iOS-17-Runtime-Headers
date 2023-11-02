
@interface TIPrintUserActionSessionAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;

@end
