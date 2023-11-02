
@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging, TITypologyLogDelegate> {
    bool  _hadSecureText;
    NSString * _inputModeIdentifier;
    TIStatusBarStyleOverrideLoggingCapture * _sbsOverrideLoggingCapture;
    TITypologyLog * _typologyLog;
    <TITypologyPreferences> * _typologyPreferences;
    TITypologyStatistic * _typologyStatistic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hadSecureText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inputModeIdentifier;
@property (nonatomic, retain) TIStatusBarStyleOverrideLoggingCapture *sbsOverrideLoggingCapture;
@property (readonly) Class superclass;
@property (nonatomic, retain) TITypologyLog *typologyLog;
@property (nonatomic, readonly) <TITypologyPreferences> *typologyPreferences;
@property (nonatomic, retain) TITypologyStatistic *typologyStatistic;

+ (void)_backgroundPruneLogsWithPreferences:(id)arg1;
+ (void)_backgroundWriteLog:(id)arg1 preferences:(id)arg2 completion:(id /* block */)arg3;
+ (void)_writeHumanReadableTraceForTypologyLog:(id)arg1 directoryURL:(id)arg2;
+ (id)_writeToFileWithTypologyLog:(id)arg1 directoryURL:(id)arg2;
+ (id)accessibilityConfigInfo;
+ (bool)createTypologyDirectoryAtURL:(id)arg1;
+ (void)pruneTypologyLogsAtDirectoryURL:(id)arg1 toMaxNumBytes:(long long)arg2 expirationInterval:(double)arg3 satisfyingPredicate:(id /* block */)arg4;
+ (void)submitAggregrateDictionaryReport:(id)arg1 inputModeIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_tryWriteToSyslogWithTrace:(id)arg1;
- (bool)allowTypologyLogForKeyboardState:(id)arg1;
- (void)backgroundWriteLogs;
- (void)dealloc;
- (void)didReachMaximumEntries:(id)arg1;
- (void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg1;
- (bool)hadSecureText;
- (id)initWithTypologyPreferences:(id)arg1;
- (id)inputModeIdentifier;
- (void)logAutocorrections:(id)arg1 trace:(id)arg2 forKeyboardState:(id)arg3 requestToken:(id)arg4;
- (void)logCandidateResultSet:(id)arg1 trace:(id)arg2 forKeyboardState:(id)arg3 requestToken:(id)arg4;
- (void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3;
- (void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(bool)arg2 granularity:(int)arg3 keyboardState:(id)arg4;
- (void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2;
- (void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4;
- (void)logKeyboardLayout:(id)arg1 name:(id)arg2;
- (void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 trace:(id)arg3 forKeyboardInput:(id)arg4 keyboardState:(id)arg5;
- (void)logReceivedCandidateRejected:(id)arg1;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (void)logReceivedSetOriginalInput:(id)arg1;
- (void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2;
- (void)logReceivedTextAccepted:(id)arg1;
- (void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3;
- (void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3;
- (id)sbsOverrideLoggingCapture;
- (void)setConfig:(id)arg1;
- (void)setHadSecureText:(bool)arg1;
- (void)setInputModeIdentifier:(id)arg1;
- (void)setSbsOverrideLoggingCapture:(id)arg1;
- (void)setTypologyLog:(id)arg1;
- (void)setTypologyStatistic:(id)arg1;
- (bool)shouldWriteToSyslogForKeyboardState:(id)arg1;
- (bool)shouldWriteToTypologyLogForKeyboardState:(id)arg1;
- (void)tryStartingTypologyLogForSyncToKeyboardState:(id)arg1;
- (id)typologyLog;
- (id)typologyPreferences;
- (id)typologyStatistic;
- (id)writeToFile;

@end
