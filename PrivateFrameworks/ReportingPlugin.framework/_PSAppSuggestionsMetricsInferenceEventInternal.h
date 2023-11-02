
@interface _PSAppSuggestionsMetricsInferenceEventInternal : ReportingPlugin.PeopleSuggestionInference {
    void suggestions;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *suggestions;

- (void).cxx_destruct;
- (id)description;
- (id)initWithId:(id)arg1 sourceBundleId:(id)arg2 suggestions:(id)arg3;
- (id)suggestions;

@end
