
@interface DESDodMLTaskSchedulingPolicy : NSObject {
    bool  _dediscoReturnRouteEnabled;
    bool  _originReturnRouteEnabled;
    bool  _parsecReturnRouteEnabled;
    double  _period;
    NSURL * _postbackBaseURL;
    unsigned long long  _recipeCountLimit;
    NSDictionary * _recipes;
    NSNumber * _telemetrySamplingRate;
    NSURL * _telemetryURL;
    double  _timeLimit;
}

@property (nonatomic, readonly, copy) NSArray *allRecipeIDs;
@property (nonatomic, readonly) bool dediscoReturnRouteEnabled;
@property (nonatomic, readonly) bool originReturnRouteEnabled;
@property (nonatomic, readonly) bool parsecReturnRouteEnabled;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly, copy) NSURL *postbackBaseURL;
@property (nonatomic, readonly) unsigned long long recipeCountLimit;
@property (nonatomic, readonly, copy) NSNumber *telemetrySamplingRate;
@property (nonatomic, readonly, copy) NSURL *telemetryURL;
@property (nonatomic, readonly) double timeLimit;

- (void).cxx_destruct;
- (id)_policyForRecipeID:(id)arg1 error:(id*)arg2;
- (id)allRecipeIDs;
- (bool)dediscoReturnRouteEnabled;
- (id)init;
- (id)initWithAssetURL:(id)arg1 error:(id*)arg2;
- (id)initWithPolicyDict:(id)arg1;
- (bool)originReturnRouteEnabled;
- (bool)parsecReturnRouteEnabled;
- (double)period;
- (id)postbackBaseURL;
- (id)predicateForRecipeID:(id)arg1 error:(id*)arg2;
- (unsigned long long)recipeCountLimit;
- (id)samplingRateForRecipeID:(id)arg1 error:(id*)arg2;
- (id)telemetrySamplingRate;
- (id)telemetryURL;
- (double)timeLimit;

@end
