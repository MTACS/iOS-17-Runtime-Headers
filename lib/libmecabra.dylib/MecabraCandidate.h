
@interface MecabraCandidate : NSObject <NSCopying> {
    void * _rawCandidate;
}

@property (nonatomic, readonly) void*rawCandidate;

+ (id)syntheticCandidateFromWords:(id)arg1 withLexicon:(struct Lexicon { void *x1; void *x2; }*)arg2 language:(int)arg3;

- (id)analysisString;
- (id)attributes;
- (id)category;
- (id)convertedAnalysisString;
- (id)convertedAnalysisStringForFirstSyllable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryReading;
- (id)initWithCandidate:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (void*)rawCandidate;
- (id)string;
- (id)surface;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)arg1 syllableLengths:(id)arg2;
- (id)wordIDs;
- (id)wordReadings;
- (id)words;

@end
