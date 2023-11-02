
@interface SRSSPhoneticChecker : NSObject {
    _EARUserProfileBuilder * _builder;
    double * _confusionMatrix;
    NSMutableArray * _lexiconEntries;
    bool  _lexiconLoaded;
    NSMutableArray * _lexiconWords;
    NSString * _localeIdentifier;
    unsigned long long  _phoneCount;
    NSDictionary * _phoneIds;
    NSMutableArray * _regionsToFree;
}

- (void).cxx_destruct;
- (void)_freeLexicon;
- (void)_freeLexiconEntry:(struct PhoneticLexiconEntry { struct PhoneSequence {} **x1; unsigned char x2; double x3; }*)arg1;
- (bool)_loadConfusionMatrixFromJsonFile:(id)arg1;
- (bool)_loadConfusionMatrixWithModelPath:(id)arg1 localization:(id)arg2;
- (void)_loadLexiconWithModelPath:(id)arg1 localization:(id)arg2;
- (id)_partitionEntriesWithCount:(unsigned long long)arg1 partitionCount:(unsigned long long)arg2;
- (unsigned char)_phoneForString:(id)arg1;
- (void)_waitOnLexiconLoad;
- (struct PhoneticLexiconEntry { struct PhoneSequence {} **x1; unsigned char x2; double x3; }*)copyLexiconEntriesForString:(id)arg1;
- (void)dealloc;
- (id)guessesForString:(id)arg1 maxResults:(unsigned long long)arg2;
- (id)guessesForString:(id)arg1 maxResults:(unsigned long long)arg2 phoneticWeight:(double)arg3 priorWeight:(double)arg4;
- (id)guessesForString:(id)arg1 maxResults:(unsigned long long)arg2 phoneticWeight:(double)arg3 priorWeight:(double)arg4 maxThreads:(unsigned long long)arg5;
- (id)initWithLocaleIdentifier:(id)arg1 modelPath:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1 modelPath:(id)arg2 syncronously:(bool)arg3;
- (id)phoneDescription:(struct PhoneSequence { unsigned char x1; char *x2; }*)arg1;

@end
