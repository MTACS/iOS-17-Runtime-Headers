
@protocol REElementRelevanceEngineProperties <REExportedInterface>

@required

- (REPredictorManager *)predictorManager;
- (RERelevanceProviderEnvironment *)providerEnvironment;
- (NSDictionary *)sectionsMap;

@end
