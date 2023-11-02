
@interface TITypingLog : NSObject {
    NSMutableArray * _correctedTransliterationForTokens;
    TIKeystrokeRecord * _currentKeystroke;
    NSMutableArray * _currentKeystrokeSequence;
    NSMutableDictionary * _debugData;
    NSMutableArray * _intendedTransliterationForTokens;
    bool  _isTransliterating;
    NSMutableArray * _keystrokesForTokens;
    NSMutableDictionary * _pathsForTokens;
}

@property (nonatomic, retain) TIKeystrokeRecord *currentKeystroke;
@property (nonatomic, retain) NSMutableArray *currentKeystrokeSequence;
@property (nonatomic, readonly) NSArray *keystrokesForTokens;

+ (id)emptyTouchEventForLogging;
+ (id)typingLog;
+ (id)typingLogWithDebug:(bool)arg1;

- (void).cxx_destruct;
- (void)addDebugObject:(id)arg1 forKey:(id)arg2;
- (bool)adjustForContinuousPath;
- (void)beginKeystrokeWithIntendedKey:(id)arg1 touchEvent:(id)arg2 touchError:(id)arg3;
- (void)beginKeystrokeWithIntendedKey:(id)arg1 touchEvent:(id)arg2 touchError:(id)arg3 documentBefore:(id)arg4;
- (void)beginToken;
- (id)correctedTransliterationSequence;
- (id)currentKeystroke;
- (id)currentKeystrokeSequence;
- (void)enumerateKeystrokesAndPathsForTokensWithBlock:(id /* block */)arg1;
- (void)finishKeystrokeWithTouchedKey:(id)arg1 touchEvent:(id)arg2 insertedKey:(id)arg3;
- (void)finishKeystrokeWithTouchedKey:(id)arg1 touchEvent:(id)arg2 insertedKey:(id)arg3 predictionBarState:(id)arg4 inlineCompletionBarState:(id)arg5;
- (id)getDebugData;
- (id)getDebugObject:(id)arg1;
- (id)init;
- (id)initWithDebug:(bool)arg1;
- (id)intendedTransliterationSequence;
- (bool)isDebugEnabled;
- (id)keystrokesForTokens;
- (void)logAcceptedCandidate:(id)arg1;
- (void)logAcceptedCandidate:(id)arg1 intendedTransliterationCandidate:(id)arg2;
- (void)logAutocorrectionInserted;
- (void)logRejectedAutocorrection;
- (void)registerPathStringAsKeyStrokes:(id)arg1 path:(id)arg2 predictionBarState:(id)arg3;
- (void)revisitPreviousToken;
- (void)setCurrentKeystroke:(id)arg1;
- (void)setCurrentKeystrokeSequence:(id)arg1;
- (void)setTokenIndex:(unsigned long long)arg1;

@end
