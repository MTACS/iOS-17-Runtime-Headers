
@interface _DPReportGenerator : NSObject <_DPMaintenance> {
    <_DPMetricsCollector> * _metricsCollector;
}

@property (nonatomic, readonly) <_DPMetricsCollector> *metricsCollector;

+ (id)filterNonConformingRecordsFrom:(id)arg1;
+ (id)queryKeysForPattern:(id)arg1 storage:(id)arg2;
+ (unsigned long long)queryRecordCountForKey:(id)arg1 withPredicate:(id)arg2 storage:(id)arg3;
+ (id)queryRecordsForKey:(id)arg1 storage:(id)arg2;
+ (id)randomizeKeys:(id)arg1 andSortByPriority:(bool)arg2;

- (void).cxx_destruct;
- (id)generateReportForKeys:(id)arg1 storage:(id)arg2;
- (id)generateReportUsing:(id)arg1;
- (id)init;
- (id)initWithMetricsCollector:(id)arg1;
- (bool)markSubmitted:(id)arg1 storage:(id)arg2;
- (id)metricsCollector;
- (void)reportMetricsForKey:(id)arg1 toBeSubmitted:(id)arg2 currentDate:(id)arg3 storage:(id)arg4;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;

@end
