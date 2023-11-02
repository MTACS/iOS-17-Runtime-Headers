
@interface PPSMetadataStore : NSObject {
    NSMutableDictionary * _metricsByID;
}

@property (nonatomic, retain) NSMutableDictionary *metricsByID;

+ (id)getMetadataHistoryForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3;
+ (id)getMetadataHistoryForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3 name:(id)arg4;
+ (id)plistMetricsFromDir:(id)arg1;
+ (id)plistMetricsFromDir:(id)arg1 forSubsystem:(id)arg2;
+ (id)sharedStore;

- (void).cxx_destruct;
- (void)addMetricsToCache:(id)arg1;
- (void)buildDeviceMetadata;
- (void)cacheFrameworkMetrics;
- (void)cacheFrameworkMetricsForSubsystem:(id)arg1;
- (void)cachePlistMetrics;
- (void)cachePlistMetricsForSubsystem:(id)arg1;
- (id)getAllFrameworkSubsystem;
- (id)getAllSubsystem;
- (id)getMetadataForSubsystem:(id)arg1;
- (id)getMetadataForSubsystem:(id)arg1 category:(id)arg2;
- (id)getMetadataForSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (id)init;
- (void)loadMetricsForSubsystem:(id)arg1;
- (id)metricsByID;
- (void)setMetricsByID:(id)arg1;

@end
