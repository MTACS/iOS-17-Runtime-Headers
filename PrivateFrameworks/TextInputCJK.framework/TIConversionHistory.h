
@interface TIConversionHistory : NSObject {
    NSMutableArray * _convertedCandidates;
    bool  _inputChangedSinceLastConversion;
    bool  _invalid;
    NSMutableArray * _mutableConvertedCandidateRefs;
    NSMutableString * _mutableConvertedCandidateText;
    unsigned long long  _revertCount;
}

@property (nonatomic, readonly) NSString *convertedCandidateText;
@property (nonatomic, retain) NSMutableArray *convertedCandidates;
@property (nonatomic, readonly) unsigned long long convertedLength;
@property (nonatomic) bool inputChangedSinceLastConversion;
@property (nonatomic) bool invalid;
@property (nonatomic, readonly) TIConvertedCandidate *lastConvertedCandidate;
@property (nonatomic, retain) NSMutableArray *mutableConvertedCandidateRefs;
@property (nonatomic, retain) NSMutableString *mutableConvertedCandidateText;
@property (nonatomic) unsigned long long revertCount;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1 candidateRef:(id)arg2 replacedAmbiguousPinyinSyllables:(id)arg3 replacementUnambiguousPinyinSyllables:(id)arg4 convertedInput:(id)arg5;
- (void)clear;
- (id)convertedCandidateText;
- (id)convertedCandidates;
- (unsigned long long)convertedLength;
- (void)didRevertLastConvertedCandidate;
- (id)init;
- (bool)inputChangedSinceLastConversion;
- (bool)invalid;
- (void)invalidate;
- (bool)isValid;
- (id)lastConvertedCandidate;
- (id)mutableConvertedCandidateRefs;
- (id)mutableConvertedCandidateText;
- (unsigned long long)revertCount;
- (void)setConvertedCandidates:(id)arg1;
- (void)setInputChangedSinceLastConversion:(bool)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setMutableConvertedCandidateRefs:(id)arg1;
- (void)setMutableConvertedCandidateText:(id)arg1;
- (void)setRevertCount:(unsigned long long)arg1;
- (bool)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)arg1;

@end
