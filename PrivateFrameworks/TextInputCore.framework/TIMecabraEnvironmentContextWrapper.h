
@interface TIMecabraEnvironmentContextWrapper : NSObject {
    NSString * _appContext;
    unsigned long long  _candidateIndex;
    unsigned long long  _candidateInternalIndex;
    unsigned long long  _environmentCandidateCount;
    NSMutableArray * _environmentCandidates;
    NSDate * _lastAnalyzeInputDate;
    struct __MecabraContext { } * _mecabraContext;
    struct __Mecabra { } * _mecabraEngine;
    int  _shuangpinType;
    NSMutableArray * _temporaryCandidates;
    int  _textContentType;
}

@property (nonatomic, copy) NSString *appContext;
@property (nonatomic) unsigned long long candidateIndex;
@property (nonatomic) unsigned long long candidateInternalIndex;
@property (nonatomic, readonly) unsigned long long contextCandidateCount;
@property (nonatomic, readonly) NSArray *contextCandidateStrings;
@property (nonatomic, readonly) NSArray *contextCandidates;
@property (nonatomic, readonly) unsigned long long environmentCandidateCount;
@property (nonatomic, readonly) NSArray *environmentCandidateStrings;
@property (nonatomic, retain) NSMutableArray *environmentCandidates;
@property (nonatomic, readonly) NSArray *inlineCandidates;
@property (nonatomic, retain) NSDate *lastAnalyzeInputDate;
@property (nonatomic) struct __MecabraContext { }*mecabraContext;
@property (nonatomic, readonly) struct __Mecabra { }*mecabraEngine;
@property (nonatomic) int shuangpinType;
@property (nonatomic, retain) NSMutableArray *temporaryCandidates;
@property (nonatomic) int textContentType;

- (void).cxx_destruct;
- (void)acceptInlineCandidates;
- (void)addContextCandidate:(void*)arg1 accept:(bool)arg2;
- (void)addContextStringCandidate:(void*)arg1;
- (void)addEnvironmentCandidate:(void*)arg1 atIndex:(unsigned long long)arg2;
- (bool)analyzeInput:(id)arg1 options:(unsigned long long)arg2;
- (bool)analyzeString:(id)arg1 options:(unsigned long long)arg2;
- (id)appContext;
- (unsigned long long)candidateIndex;
- (unsigned long long)candidateInternalIndex;
- (void)clearAll;
- (void)clearContext;
- (void)clearInline;
- (void)commitPredictionCandidate:(void*)arg1;
- (void)completelyCommitInlineCandidate:(void*)arg1;
- (unsigned long long)contextCandidateCount;
- (id)contextCandidateStrings;
- (id)contextCandidates;
- (id)contextString:(id)arg1 forRightContext:(bool)arg2;
- (void*)createMecabraCandidateFromString:(id)arg1;
- (void)dealloc;
- (void)declareEndOfSentence;
- (unsigned long long)environmentCandidateCount;
- (id)environmentCandidateStrings;
- (id)environmentCandidates;
- (id)findSupplementalLexiconCandidatesSurroundingCursor;
- (id)initWithMecabraEngine:(struct __Mecabra { }*)arg1 language:(int)arg2;
- (id)inlineCandidates;
- (id)lastAnalyzeInputDate;
- (struct __MecabraContext { }*)mecabraContext;
- (struct __Mecabra { }*)mecabraEngine;
- (void)partiallyCommitInlineCandidate:(void*)arg1;
- (bool)predictionCandidatesWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2;
- (void)removeCandidatesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)revertInlineCandidate;
- (void)revertLearningForCandidate:(void*)arg1;
- (void)setAppContext:(id)arg1;
- (void)setCandidateIndex:(unsigned long long)arg1;
- (void)setCandidateInternalIndex:(unsigned long long)arg1;
- (void)setEnvironmentCandidates:(id)arg1;
- (void)setGeometryModel:(void*)arg1 modelData:(struct __CFArray { }*)arg2;
- (void)setKeyboardLayout:(id)arg1;
- (void)setLastAnalyzeInputDate:(id)arg1;
- (void)setMecabraContext:(struct __MecabraContext { }*)arg1;
- (void)setPrivateMode:(bool)arg1;
- (void)setShuangpinType:(int)arg1;
- (void)setTemporaryCandidates:(id)arg1;
- (void)setTextContentType:(int)arg1;
- (int)shuangpinType;
- (void)syncEnvironmentAndContextCandidates;
- (id)temporaryCandidates;
- (int)textContentType;

@end
