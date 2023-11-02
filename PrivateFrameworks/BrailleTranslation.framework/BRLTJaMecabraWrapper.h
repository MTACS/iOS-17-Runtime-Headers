
@interface BRLTJaMecabraWrapper : NSObject {
    NSMutableDictionary * _candidateRefForSurface;
    struct __MecabraContext { } * _context;
    NSString * _currentAnalysis;
    NSString * _currentSurface;
    struct __Mecabra { } * _mecabra;
    bool  _reachedEnd;
    NSString * _string;
}

- (void).cxx_destruct;
- (void)analyzeString:(id)arg1;
- (void)dealloc;
- (id)getCurrentCandidateAnalysisString;
- (id)getCurrentCandidateSurface;
- (id)init;
- (void)learnCandidate:(id)arg1;
- (bool)moveToNextCandidate;

@end
