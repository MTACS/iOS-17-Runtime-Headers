
@interface ODCurareInterfaceModule : NSObject {
    ODCurareInterfaceModuleInternal * _underlyingObject;
}

@property (readonly) ODCurareInterfaceModuleInternal *underlyingObject;

- (void).cxx_destruct;
- (bool)evaluateModelsWithEvaluationModels:(id)arg1 error:(id*)arg2;
- (void)generateCAReportAndReturnError:(id*)arg1;
- (id)getSelectedModelWithDefaultModel:(id)arg1 selectionPolicy:(id)arg2 error:(id*)arg3;
- (id)initWithBundleIdentifier:(id)arg1 evaluationInstance:(id)arg2 personalizationInstance:(id)arg3 pruningPolicy:(id)arg4 error:(id*)arg5;
- (bool)personalizeModelsWithPersonalizableModels:(id)arg1 personalizationPolicy:(id)arg2 error:(id*)arg3;
- (id)underlyingObject;

@end
