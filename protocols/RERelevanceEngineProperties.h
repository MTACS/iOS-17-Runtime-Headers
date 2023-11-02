
@protocol RERelevanceEngineProperties <REExportedInterface>

@required

- (RERelevanceEngineConfiguration *)configuration;
- (RELiveElementCoordinator *)coordinator;
- (REDataSourceManager *)dataSourceManager;
- (REFeatureSet *)mlFeatures;
- (REMLModelManager *)modelManager;
- (NSString *)name;
- (REFeatureSet *)rootFeatures;
- (NSArray *)subsystems;

@end
