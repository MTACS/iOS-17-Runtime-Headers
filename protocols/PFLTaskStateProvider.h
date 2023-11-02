
@protocol PFLTaskStateProvider <NSObject>

@required

- (NSURL *)compiledModelURL;
- (<MLBatchProvider> *)dataProvider;
- (NSArray *)layerNames;
- (MLModelConfiguration *)modelConfiguration;
- (NSString *)modelIdentifier;
- (unsigned long long)privatizationNormBinCount;
- (double)privatizationNormMax;
- (NSString *)taskIdentifier;
- (double)validationSplit;

@optional

- (NSString *)metricsIdentifier;
- (<PFLDataSource> *)metricsProvider;
- (int)modelVersion;
- (PFLNetworkResourceManager *)resourceManager;
- (NSString *)uploadResultsIdentifier;
- (<MLBatchProvider> *)validationProvider;

@end
