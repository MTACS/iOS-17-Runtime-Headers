
@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionObserver> {
    <TIKeyboardInteractionProtocol> * _savedSession;
    NSMutableArray * _typingEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long eventCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSArray *typingEvents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptingCandidateWithTrigger:(id)arg1;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
- (void)addTouchEvent:(id)arg1;
- (void)analyzeSessionWithSessionParams:(id)arg1;
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(bool)arg6 useCandidateSelection:(bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (void)changingContextWithTrigger:(id)arg1;
- (void)contextDidChange:(id)arg1 wordDelete:(bool)arg2 cursorMoved:(bool)arg3 extendsPriorWord:(bool)arg4 inWord:(id)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
- (void)encodeWithCoder:(id)arg1;
- (void)endSessionWithTimestamp:(id)arg1;
- (unsigned long long)eventCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
- (id)logDetailsForKeyboardState:(id)arg1;
- (void)saveRecording;
- (id)savedSession;
- (void)sendTo:(id)arg1;
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;
- (bool)shouldPrintEvent:(id)arg1;
- (void)startSessionWithTimestamp:(id)arg1;
- (id)temporaryKeyboardsDirectory;
- (id)typingEvents;

@end
