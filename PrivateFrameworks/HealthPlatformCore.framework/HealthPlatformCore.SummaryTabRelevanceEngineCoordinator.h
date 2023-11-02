
@interface HealthPlatformCore.SummaryTabRelevanceEngineCoordinator : NSObject {
    void $__lazy_storage_$_crossedFeatures;
    void $__lazy_storage_$_metricsRecorder;
    void $__lazy_storage_$_primaryFeatures;
    void $__lazy_storage_$_relevanceEngine;
    void $__lazy_storage_$_relevanceProviderManagerClasses;
    void $__lazy_storage_$_trainingContext;
    void dataSources;
    void dispatchQueue;
    void engineName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  modelPath;
    void modelVersion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pretrainedModelURL;
}

- (void).cxx_destruct;
- (id)init;

@end
