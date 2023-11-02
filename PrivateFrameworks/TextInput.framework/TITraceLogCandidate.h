
@interface TITraceLogCandidate : NSObject <TITraceLogCandidateExportRepresenting> {
    double  _contextProbability;
    NSNumber * _dynamicUsageCount;
    NSString * _filterName;
    NSString * _lexiconLocaleIdentifier;
    NSNumber * _penalty;
    NSString * _priorContext;
    double  _probability;
    NSString * _token;
    unsigned int  _wordId;
    NSArray * _wordSources;
}

@property (nonatomic) double contextProbability;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSNumber *dynamicUsageCount;
@property (nonatomic, retain) NSString *filterName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lexiconLocaleIdentifier;
@property (nonatomic, retain) NSNumber *penalty;
@property (nonatomic, retain) NSString *priorContext;
@property (nonatomic) double probability;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *token;
@property (nonatomic) unsigned int wordId;
@property (nonatomic, retain) NSArray *wordSources;

+ (id)_wordSourcesFromCandidateString:(id)arg1;
+ (id)candidateFromCandidateString:(id)arg1;
+ (id)candidateFromFinalCandidateString:(id)arg1;
+ (id)candidateFromRemovedCandidateString:(id)arg1;

- (void).cxx_destruct;
- (double)contextProbability;
- (id)dictionaryRepresentation;
- (id)dynamicUsageCount;
- (id)filterName;
- (id)lexiconLocaleIdentifier;
- (id)penalty;
- (id)priorContext;
- (double)probability;
- (void)setContextProbability:(double)arg1;
- (void)setDynamicUsageCount:(id)arg1;
- (void)setFilterName:(id)arg1;
- (void)setLexiconLocaleIdentifier:(id)arg1;
- (void)setPenalty:(id)arg1;
- (void)setPriorContext:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)setToken:(id)arg1;
- (void)setWordId:(unsigned int)arg1;
- (void)setWordSources:(id)arg1;
- (id)token;
- (unsigned int)wordId;
- (id)wordSources;

@end
