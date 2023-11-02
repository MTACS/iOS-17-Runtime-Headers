
@interface ODCurareEvaluationAndReportingModule : NSObject {
    ODCurareEvaluationAndReportingModuleInternal * _underlyingObject;
}

@property (readonly) ODCurareEvaluationAndReportingModuleInternal *underlyingObject;

- (void).cxx_destruct;
- (bool)evaluateDefaultModelWithDefaultModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id*)arg3;
- (id)getEvaluationResults;
- (id)getSelectedModel:(id*)arg1;
- (id)initWithBundleIdentifier:(id)arg1 dataProviderInstance:(id)arg2 evaluationInstance:(id)arg3 personalizationInstance:(id)arg4 pruningPolicy:(id)arg5 error:(id*)arg6;
- (bool)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id*)arg3;
- (bool)trainAndEvaluateModelsWithCandidateModels:(id)arg1 personalizationPolicy:(id)arg2 selectionPolicy:(id)arg3 error:(id*)arg4;
- (id)underlyingObject;

@end
