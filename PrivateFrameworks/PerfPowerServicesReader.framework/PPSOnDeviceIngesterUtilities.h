
@interface PPSOnDeviceIngesterUtilities : NSObject

+ (id)dataSourceForSubsystem:(id)arg1 category:(id)arg2;
+ (id)filepathForMetricDefinition:(id)arg1;
+ (id)filepathForSubsystem:(id)arg1 category:(id)arg2;
+ (id)metricDefinitionForSubsystem:(id)arg1 category:(id)arg2 metricName:(id)arg3;
+ (id)metricDefinitionHistoryForSubsystem:(id)arg1 category:(id)arg2 metricName:(id)arg3;

@end
