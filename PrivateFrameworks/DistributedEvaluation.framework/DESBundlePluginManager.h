
@interface DESBundlePluginManager : NSObject <DESPluginManaging> {
    NSString * _bundleIdentifier;
    <DESRecipeEvaluation> * _evaluator;
    DESRecipeEvaluationSession * _recipeEvaluation;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)pluginManagerForBundleId:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 DESRecipeEvaluationObject:(id)arg2;
- (id)performDodMLTask:(id)arg1 outError:(id*)arg2;
- (bool)shouldDownloadURL:(id)arg1 forTask:(id)arg2;
- (void)stopWithCompletion:(id /* block */)arg1;
- (id)telemetryWithRecordSet:(id)arg1;

@end
