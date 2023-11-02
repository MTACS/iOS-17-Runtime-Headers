
@interface _PSFeedbackMetricsEventInternal : NSObject {
    void airdropOptionPresent;
    void engagedSuggestionId;
    void id;
    void inferenceSource;
    void timeouts;
    void trialDeploymentId;
    void trialExperimentId;
    void trialTreatmentId;
    void type;
    void visibleAppSuggestionCount;
    void visiblePeopleSuggestionCount;
}

@property (nonatomic, readonly) bool airdropOptionPresent;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *engagedSuggestionId;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) long long inferenceSource;
@property (nonatomic, readonly) NSString *trialDeploymentId;
@property (nonatomic, readonly) NSString *trialExperimentId;
@property (nonatomic, readonly) NSString *trialTreatmentId;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned char visibleAppSuggestionCount;
@property (nonatomic, readonly) unsigned char visiblePeopleSuggestionCount;

- (void).cxx_destruct;
- (bool)airdropOptionPresent;
- (id)description;
- (id)engagedSuggestionId;
- (id)id;
- (long long)inferenceSource;
- (id)init;
- (id)initWithId:(id)arg1 type:(long long)arg2 engagedSuggestionId:(id)arg3 airdropOptionPresent:(bool)arg4 visiblePeopleSuggestionCount:(unsigned char)arg5 visibleAppSuggestionCount:(unsigned char)arg6 inferenceSource:(long long)arg7 trialExperimentId:(id)arg8 trialTreatmentId:(id)arg9 trialDeploymentId:(id)arg10 peopleSuggestionsTimeoutOccurred:(bool)arg11;
- (id)trialDeploymentId;
- (id)trialExperimentId;
- (id)trialTreatmentId;
- (long long)type;
- (unsigned char)visibleAppSuggestionCount;
- (unsigned char)visiblePeopleSuggestionCount;

@end
