
@interface REMLLinearModel : REMLModel <REMLLinearModelProperties> {
    NSDictionary * _models;
}

@property (nonatomic, readonly) NSDictionary *models;

- (void).cxx_destruct;
- (void)_clearCache;
- (void)_clearModel;
- (void)_enumerateModelsForFeatureMap:(id)arg1 usingBlock:(id /* block */)arg2;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (bool)_loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (bool)_saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2;
- (void)logCoreAnalyticsMetrics;
- (id)models;
- (id)predictionSetWithFeatures:(id)arg1;
- (bool)requiresDirectory;
- (void)setMetricsRecorder:(id)arg1;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3;

@end
