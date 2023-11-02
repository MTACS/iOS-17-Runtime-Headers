
@interface ODCurareEvaluationAndReportingModuleInternal : NSObject {
    void allEvaluationResults;
    void allUserDataDictionaryAdapted;
    void allUserDataDictionaryDefault;
    void boundaryList;
    void clientBundleIdentifier;
    void dataProviderInstance;
    void defaultModelEvaluationSummary;
    void evaluationInstance;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkEvaluationDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkExecutionDate;
    void frameworkExecutionMetadata;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkExecutionSelectedModelURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frameworkPersonalizationDate;
    void generatedLatestBoundary;
    void historicalModelEvaluationResults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPersonalizationSampleDate;
    void metadataStore;
    void modelEvaluationSummaryStore;
    void modelStore;
    void newModelEvaluationResults;
    void personalizationInstance;
    void personalizationResult;
    void personalizationResults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  personalizedModelPath;
    void pruningPolicy;
    void resultMetadataDictionary;
    void shouldProduceReport;
    void shouldReportFailure;
    void skipAdaptation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  temporaryDirectory;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)evaluateDefaultModelWithDefaultModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id*)arg3;
- (bool)generatePETReportAndReturnError:(id*)arg1;
- (id)getEvaluationResults;
- (id)getSelectedModelAndReturnError:(id*)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 dataProviderInstance:(id)arg2 evaluationInstance:(id)arg3 personalizationInstance:(id)arg4 pruningPolicy:(id)arg5 error:(id*)arg6;
- (id)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id*)arg3;
- (id)trainAndEvaluateModelsWithCandidateModels:(id)arg1 personalizationPolicy:(id)arg2 modelSelectionPolicy:(id)arg3 error:(id*)arg4;

@end
