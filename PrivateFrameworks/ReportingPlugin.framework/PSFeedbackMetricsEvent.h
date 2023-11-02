
@interface PSFeedbackMetricsEvent : NSObject {
    _PSFeedbackMetricsEventInternal * _underlyingObject;
}

@property (readonly) _PSFeedbackMetricsEventInternal *underlyingObject;

- (void).cxx_destruct;
- (id)initWithId:(id)arg1 type:(long long)arg2 engagedSuggestionId:(id)arg3 airdropOptionPresent:(bool)arg4 visiblePeopleSuggestionCount:(unsigned char)arg5 visibleAppSuggestionCount:(unsigned char)arg6 inferenceSource:(long long)arg7 trialExperimentId:(id)arg8 trialTreatmentId:(id)arg9 trialDeploymentId:(id)arg10;
- (id)initWithId:(id)arg1 type:(long long)arg2 engagedSuggestionId:(id)arg3 airdropOptionPresent:(bool)arg4 visiblePeopleSuggestionCount:(unsigned char)arg5 visibleAppSuggestionCount:(unsigned char)arg6 inferenceSource:(long long)arg7 trialExperimentId:(id)arg8 trialTreatmentId:(id)arg9 trialDeploymentId:(id)arg10 peopleSuggestionTimeoutOccurred:(bool)arg11;
- (id)underlyingObject;

@end
