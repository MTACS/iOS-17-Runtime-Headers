
@interface _PSPeopleSuggestionsMetricsInferenceEventInternal : ReportingPlugin.PeopleSuggestionInference {
    void suggestions;
    void timedOutModels;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)initWithId:(id)arg1 sourceBundleId:(id)arg2 timedOutModels:(id)arg3 suggestions:(id)arg4;

@end
