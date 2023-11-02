
@interface TIFavoniusTypingSessionAnalyzer : NSObject <TITypingSessionAnalyzing> {
    NSArray * _activeInputModes;
    TITypingSession * _currentSession;
    NSString * _lastMessage;
    double  _lastMessageEndTime;
    TIKeyboardState * _lastMessageKeyboardState;
    double  _lastMessageStartTime;
    int  _lastMessageWordsEntered;
    NSDictionary * _testingParameters;
    <TIUserModeling> * _userModel;
}

@property (nonatomic, retain) TITypingSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastMessage;
@property (nonatomic) double lastMessageEndTime;
@property (nonatomic) TIKeyboardState *lastMessageKeyboardState;
@property (nonatomic) double lastMessageStartTime;
@property (nonatomic) int lastMessageWordsEntered;
@property (readonly) Class superclass;
@property (nonatomic, retain) <TIUserModeling> *userModel;

+ (id)favoniusTypingSessionAnalyzerForUserModel:(id)arg1;

- (void).cxx_destruct;
- (void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4;
- (void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (id)currentSession;
- (id)deleteLengthMetrics:(id)arg1 nextWordEntryCandText:(id)arg2;
- (int)durationInMillisecondsFromStartTime:(double)arg1 endTime:(double)arg2;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (void)handleDeleteWord:(id)arg1 nextAction:(id)arg2;
- (void)handlePath:(id)arg1;
- (void)handleWordEntry:(id)arg1;
- (void)incrementTransientCounterForKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3;
- (id)initWithUserModel:(id)arg1;
- (bool)isPathable:(id)arg1 context:(id)arg2;
- (id)lastMessage;
- (double)lastMessageEndTime;
- (id)lastMessageKeyboardState;
- (double)lastMessageStartTime;
- (int)lastMessageWordsEntered;
- (void)logPathedCandidate:(id)arg1 forKey:(id)arg2 isCompletion:(bool)arg3;
- (void)reportLastMessage;
- (void)setCurrentSession:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)setLastMessageEndTime:(double)arg1;
- (void)setLastMessageKeyboardState:(id)arg1;
- (void)setLastMessageStartTime:(double)arg1;
- (void)setLastMessageWordsEntered:(int)arg1;
- (void)setUserModel:(id)arg1;
- (void)trackMessagesForAction:(id)arg1;
- (void)updateDurationCounterForWord:(id)arg1 forTypingContext:(id)arg2;
- (bool)updatePQTCountersForCandidate:(id)arg1 withText:(id)arg2 andContext:(id)arg3;
- (void)updateSourceCountersForCandidate:(id)arg1 withText:(id)arg2 andContext:(id)arg3 hasPQTSource:(bool)arg4;
- (id)userModel;

@end
