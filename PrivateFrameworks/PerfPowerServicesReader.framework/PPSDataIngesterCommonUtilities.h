
@interface PPSDataIngesterCommonUtilities : NSObject

+ (id)columnNamesForFilepath:(id)arg1 dataSource:(id)arg2;
+ (id)dataSourceForMetricDefinition:(id)arg1;
+ (long long)fileTypeForFilepath:(id)arg1;
+ (bool)isMetricStorageFilepath:(id)arg1;

@end
