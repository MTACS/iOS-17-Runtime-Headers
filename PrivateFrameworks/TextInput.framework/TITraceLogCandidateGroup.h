
@interface TITraceLogCandidateGroup : NSObject <TITraceLogCandidateExportRepresenting> {
    NSMutableArray * _candidates;
    NSString * _omegaFactorsString;
    double  _omegaGeometryScore;
    double  _omegaLanguagePowerScore;
    double  _omegaTypingScore;
    double  _omegaWordScore;
    double  _probability;
    NSString * _sequenceString;
}

@property (nonatomic, readonly) NSArray *candidates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *omegaFactorsString;
@property (nonatomic) double omegaGeometryScore;
@property (nonatomic) double omegaLanguagePowerScore;
@property (nonatomic) double omegaTypingScore;
@property (nonatomic) double omegaWordScore;
@property (nonatomic) double probability;
@property (nonatomic, retain) NSString *sequenceString;
@property (readonly) Class superclass;

+ (id)groupFromGroupString:(id)arg1;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1;
- (id)candidates;
- (id)dictionaryRepresentation;
- (id)init;
- (id)omegaFactorsString;
- (double)omegaGeometryScore;
- (double)omegaLanguagePowerScore;
- (double)omegaTypingScore;
- (double)omegaWordScore;
- (double)probability;
- (id)sequenceString;
- (void)setOmegaFactorsString:(id)arg1;
- (void)setOmegaGeometryScore:(double)arg1;
- (void)setOmegaLanguagePowerScore:(double)arg1;
- (void)setOmegaTypingScore:(double)arg1;
- (void)setOmegaWordScore:(double)arg1;
- (void)setProbability:(double)arg1;
- (void)setSequenceString:(id)arg1;

@end
