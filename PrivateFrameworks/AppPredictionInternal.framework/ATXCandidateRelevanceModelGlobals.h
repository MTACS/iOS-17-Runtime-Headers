
@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)isPipelineEnabled;
- (int)maxCategoricalFeaturesCount;

@end
