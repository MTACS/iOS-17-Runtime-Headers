
@interface TITraceLogCandidateWordSource : NSObject {
    double  _linguisticContextProbability;
    double  _probability;
    NSString * _wordSource;
}

@property (nonatomic) double linguisticContextProbability;
@property (nonatomic) double probability;
@property (nonatomic, retain) NSString *wordSource;

- (void).cxx_destruct;
- (id)initWithWordSource:(id)arg1 probability:(double)arg2 linguisticContextProbability:(double)arg3;
- (double)linguisticContextProbability;
- (double)probability;
- (void)setLinguisticContextProbability:(double)arg1;
- (void)setProbability:(double)arg1;
- (void)setWordSource:(id)arg1;
- (id)wordSource;

@end
