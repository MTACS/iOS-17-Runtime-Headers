
@interface TIRevisionRateAnalyzer : NSObject <TITypingSessionAnalyzing> {
    bool  _hasCursorMovement;
    bool  _hasEmojiInput;
    NSNumber * _sessionAlignmentConfidence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCursorMovement;
@property (nonatomic) bool hasEmojiInput;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *sessionAlignmentConfidence;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createEventSpec;
- (void)_dispatchEventPayloads:(id)arg1 analyticsService:(id)arg2 typingSession:(id)arg3;
- (void)_registerAnalyticsEventSpecWithAnalyticsService;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (id)getSessionFields;
- (bool)hasCursorMovement;
- (bool)hasEmojiInput;
- (id)init;
- (id)sessionAlignmentConfidence;
- (void)setHasCursorMovement:(bool)arg1;
- (void)setHasEmojiInput:(bool)arg1;
- (void)setSessionAlignmentConfidence:(id)arg1;

@end
