
@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates {
    unsigned long long  _disambiguatedSyllablesCount;
    NSArray * _disambiguationCandidates;
    bool  _regenerateDisambiguationCandidates;
    unsigned long long  _selectedDisambiguationCandidateIndex;
    unsigned long long  _unambiguousSyllableCount;
}

@property (nonatomic, readonly) unsigned long long disambiguatedSyllablesCount;
@property (nonatomic, readonly) NSArray *disambiguationCandidates;
@property (nonatomic, readonly) bool regenerateDisambiguationCandidates;
@property (nonatomic, readonly) unsigned long long selectedDisambiguationCandidateIndex;
@property (nonatomic, readonly) unsigned long long unambiguousSyllableCount;

- (void).cxx_destruct;
- (unsigned long long)disambiguatedSyllablesCount;
- (id)disambiguationCandidates;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 disambiguationCandidates:(id)arg5 unambiguousSyllableCount:(unsigned long long)arg6 selectedDisambiguationCandidateIndex:(unsigned long long)arg7 regenerateDisambiguationCandidates:(bool)arg8 predictionEnabled:(bool)arg9 reanalysisMode:(bool)arg10 target:(id)arg11 action:(SEL)arg12 geometryModelData:(id)arg13 hardwareKeyboardMode:(bool)arg14 logger:(id)arg15;
- (bool)regenerateDisambiguationCandidates;
- (unsigned long long)selectedDisambiguationCandidateIndex;
- (unsigned long long)unambiguousSyllableCount;

@end
