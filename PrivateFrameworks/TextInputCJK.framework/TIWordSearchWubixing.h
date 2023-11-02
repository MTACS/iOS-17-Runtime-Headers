
@interface TIWordSearchWubixing : TIWordSearchShapeBased {
    int  _wubiStandard;
}

@property (nonatomic) int wubiStandard;

- (id)autoconvertWubiXingPrefixes:(id)arg1 option:(unsigned long long)arg2 candidateResultSet:(id)arg3 autoconvertedCandidateArray:(id*)arg4;
- (void)checkWubiStandard;
- (void)dealloc;
- (id)mecabraCreationOptionsDictionary;
- (int)mecabraInputMethodType;
- (unsigned char)nameReadingPairGenerationMode;
- (void)setWubiStandard:(int)arg1;
- (void*)shouldAutoCommitCode:(id)arg1 withOption:(unsigned long long)arg2;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (void)updateMecabraState;
- (int)wubiStandard;
- (int)wubiStandardPreference;

@end
