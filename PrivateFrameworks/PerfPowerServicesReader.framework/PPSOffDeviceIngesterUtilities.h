
@interface PPSOffDeviceIngesterUtilities : NSObject

+ (id)dataSourceForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3;
+ (id)metricDefinitionForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3 metricName:(id)arg4;
+ (id)metricDefinitionHistoriesForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3;
+ (id)metricDefinitionHistoryForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3 metricName:(id)arg4;
+ (id)metricDefinitionsForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3 metricNames:(id)arg4;

@end
