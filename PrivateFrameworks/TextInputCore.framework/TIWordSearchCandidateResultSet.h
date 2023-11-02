
@interface TIWordSearchCandidateResultSet : NSObject <NSCopying> {
    NSString * _autoconvertedCandidateString;
    NSArray * _autoconvertedCandidates;
    NSString * _autoconvertedInputString;
    TIKeyboardCandidate * _candidateAfterSegmentBreak;
    NSArray * _disambiguationCandidates;
    NSMutableDictionary * _mutableCandidateRefsDictionary;
    NSMutableArray * _mutableCandidates;
    NSMutableArray * _mutableProactiveTriggers;
    NSArray * _proactiveCandidates;
    unsigned long long  _selectedDisambiguationCandidateIndex;
}

@property (nonatomic, retain) NSString *autoconvertedCandidateString;
@property (nonatomic, copy) NSArray *autoconvertedCandidates;
@property (nonatomic, retain) NSString *autoconvertedInputString;
@property (nonatomic, copy) TIKeyboardCandidate *candidateAfterSegmentBreak;
@property (nonatomic, readonly) NSDictionary *candidateRefsDictionary;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, copy) NSArray *disambiguationCandidates;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) NSMutableDictionary *mutableCandidateRefsDictionary;
@property (nonatomic, retain) NSMutableArray *mutableCandidates;
@property (nonatomic, readonly) NSMutableArray *mutableProactiveTriggers;
@property (nonatomic, retain) NSArray *proactiveCandidates;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic) unsigned long long selectedDisambiguationCandidateIndex;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

+ (id)emptySet;

- (void).cxx_destruct;
- (void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2;
- (void)addMecabraFacemarkCandidate:(void*)arg1 forInput:(id)arg2;
- (void)addMecabraProactiveCandidate:(void*)arg1 triggerSourceType:(unsigned char)arg2;
- (void)addProactiveTrigger:(id)arg1;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3 deleteCount:(unsigned long long)arg4;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 annotation:(id)arg6;
- (void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2;
- (id)autoconvertedCandidateString;
- (id)autoconvertedCandidates;
- (id)autoconvertedInputString;
- (id)candidateAfterSegmentBreak;
- (id)candidateRefsDictionary;
- (id)candidates;
- (void)clearProactiveTriggers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disambiguationCandidates;
- (id)init;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 disambiguationCandidates:(id)arg3 selectedDisambiguationCandidateIndex:(unsigned long long)arg4;
- (void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2 atIndex:(unsigned long long)arg3;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)isEmpty;
- (void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)mutableCandidateRefsDictionary;
- (id)mutableCandidates;
- (id)mutableProactiveTriggers;
- (id)proactiveCandidates;
- (id)proactiveTriggers;
- (unsigned long long)selectedDisambiguationCandidateIndex;
- (void)setAutoconvertedCandidateString:(id)arg1;
- (void)setAutoconvertedCandidates:(id)arg1;
- (void)setAutoconvertedInputString:(id)arg1;
- (void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)setCandidateAfterSegmentBreak:(id)arg1;
- (void)setDisambiguationCandidates:(id)arg1;
- (void)setMutableCandidateRefsDictionary:(id)arg1;
- (void)setMutableCandidates:(id)arg1;
- (void)setProactiveCandidates:(id)arg1;
- (void)setSelectedDisambiguationCandidateIndex:(unsigned long long)arg1;
- (void)updateSupplementalMecabraCandidate:(id)arg1 withMecabraCandidateRef:(void*)arg2;

// Image: /System/Library/PrivateFrameworks/TextInputCJK.framework/TextInputCJK

- (unsigned long long)nthIndexIgnoringExtensionCandidates:(unsigned long long)arg1;

@end
