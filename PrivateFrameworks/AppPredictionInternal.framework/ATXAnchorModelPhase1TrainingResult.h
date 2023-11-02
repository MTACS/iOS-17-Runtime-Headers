
@interface ATXAnchorModelPhase1TrainingResult : NSObject {
    double  _anchorPopularity;
    NSString * _candidateId;
    double  _classConditionalProbability;
    double  _globalPopularity;
    ATXAnchorModelPBLaunchHistoryMetadata * _launchHistory;
    long long  _numEngagedSuggestions;
    long long  _numRejectedSuggestion;
    long long  _numShownSuggestions;
    long long  _numUniqueAnchorOccurrencesWithUniqueCandidateOccurrence;
    double  _posteriorProbability;
    double  _standardDeviationOfOffsetFromAnchor;
}

@property (nonatomic) double anchorPopularity;
@property (nonatomic, retain) NSString *candidateId;
@property (nonatomic) double classConditionalProbability;
@property (nonatomic) double globalPopularity;
@property (nonatomic, retain) ATXAnchorModelPBLaunchHistoryMetadata *launchHistory;
@property (nonatomic) long long numEngagedSuggestions;
@property (nonatomic) long long numRejectedSuggestion;
@property (nonatomic) long long numShownSuggestions;
@property (nonatomic) long long numUniqueAnchorOccurrencesWithUniqueCandidateOccurrence;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) double standardDeviationOfOffsetFromAnchor;

- (void).cxx_destruct;
- (double)anchorPopularity;
- (id)candidateId;
- (double)classConditionalProbability;
- (id)description;
- (double)globalPopularity;
- (id)launchHistory;
- (long long)numEngagedSuggestions;
- (long long)numRejectedSuggestion;
- (long long)numShownSuggestions;
- (long long)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrence;
- (double)posteriorProbability;
- (void)setAnchorPopularity:(double)arg1;
- (void)setCandidateId:(id)arg1;
- (void)setClassConditionalProbability:(double)arg1;
- (void)setGlobalPopularity:(double)arg1;
- (void)setLaunchHistory:(id)arg1;
- (void)setNumEngagedSuggestions:(long long)arg1;
- (void)setNumRejectedSuggestion:(long long)arg1;
- (void)setNumShownSuggestions:(long long)arg1;
- (void)setNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrence:(long long)arg1;
- (void)setPosteriorProbability:(double)arg1;
- (void)setStandardDeviationOfOffsetFromAnchor:(double)arg1;
- (double)standardDeviationOfOffsetFromAnchor;

@end
