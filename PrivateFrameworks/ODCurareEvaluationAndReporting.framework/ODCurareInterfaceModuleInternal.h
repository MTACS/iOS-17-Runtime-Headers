
@interface ODCurareInterfaceModuleInternal : NSObject {
    void clientBundleIdentifier;
    void defaultModelEvaluationSummary;
    void evaluationInstance;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkEvaluationDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkExecutionDate;
    void frameworkExecutionMetadata;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkExecutionSelectedModelURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkPersonalizationDate;
    void historicalModelEvaluationResults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPersonalizationSampleDate;
    void metadataStore;
    void modelEvaluationSummaryStore;
    void modelStore;
    void personalizationInstance;
    void personalizationModelEvaluationResults;
    void pruningPolicy;
    void shouldReportFailure;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  temporaryDirectory;
}

- (void).cxx_destruct;
- (id)evaluateModelsWithEvaluationModels:(id)arg1 error:(id*)arg2;
- (bool)generateCAReportAndReturnError:(id*)arg1;
- (id)getSelectedModelWithDefaultModel:(id)arg1 selectionPolicy:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 evaluationInstance:(id)arg2 personalizationInstance:(id)arg3 pruningPolicy:(id)arg4 error:(id*)arg5;
- (id)personalizeModelsWithPersonalizableModels:(id)arg1 personalizationPolicy:(id)arg2 error:(id*)arg3;

@end
