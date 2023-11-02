
@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {
    SEL  _action;
    unsigned long long  _autocapitalizationType;
    TIKeyboardCandidate * _candidateAfterSegmentBreak;
    NSArray * _geometryModelData;
    bool  _hardwareKeyboardMode;
    NSString * _inputString;
    MCKeyboardInput * _keyboardInput;
    MCAcceptCandidateInput * _lastAcceptCandidateInput;
    TIMecabraIMLogger * _logger;
    bool  _predictionEnabled;
    bool  _reanalysisMode;
    TIWordSearchCandidateResultSet * _results;
    unsigned long long  _segmentBreakIndex;
    id  _target;
    TIWordSearch * _wordSearch;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) unsigned long long autocapitalizationType;
@property (nonatomic, retain) TIKeyboardCandidate *candidateAfterSegmentBreak;
@property (nonatomic, readonly) NSArray *geometryModelData;
@property (nonatomic, readonly) bool hardwareKeyboardMode;
@property (nonatomic, readonly) NSString *inputString;
@property (nonatomic, readonly) MCKeyboardInput *keyboardInput;
@property (nonatomic, readonly) MCAcceptCandidateInput *lastAcceptCandidateInput;
@property (nonatomic, readonly) TIMecabraIMLogger *logger;
@property (nonatomic, readonly) bool predictionEnabled;
@property (nonatomic, readonly) bool reanalysisMode;
@property (nonatomic, retain) TIWordSearchCandidateResultSet *results;
@property (nonatomic) unsigned long long segmentBreakIndex;
@property (nonatomic, readonly) id target;
@property (retain) TIWordSearch *wordSearch;

- (void).cxx_destruct;
- (SEL)action;
- (unsigned long long)autocapitalizationType;
- (id)candidateAfterSegmentBreak;
- (void)checkForCachedResults;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;
- (void)dealloc;
- (id)geometryModelData;
- (bool)hardwareKeyboardMode;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 predictionEnabled:(bool)arg5 reanalysisMode:(bool)arg6 autocapitalizationType:(unsigned long long)arg7 target:(id)arg8 action:(SEL)arg9 geometryModelData:(id)arg10 hardwareKeyboardMode:(bool)arg11 logger:(id)arg12;
- (id)inputString;
- (id)keyboardInput;
- (id)lastAcceptCandidateInput;
- (id)logger;
- (void)perform;
- (bool)predictionEnabled;
- (bool)reanalysisMode;
- (id)results;
- (unsigned long long)segmentBreakIndex;
- (void)setCandidateAfterSegmentBreak:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSegmentBreakIndex:(unsigned long long)arg1;
- (void)setWordSearch:(id)arg1;
- (id)target;
- (id)wordSearch;

@end
