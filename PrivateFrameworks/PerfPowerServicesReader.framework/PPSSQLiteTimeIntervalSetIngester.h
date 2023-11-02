
@interface PPSSQLiteTimeIntervalSetIngester : NSObject <PPSDataIngesterProtocol> {
    NSURL * _filepath;
    id  _metricDefinition;
    NSArray * _metricNames;
    NSPredicate * _predicate;
    NSString * _sourceName;
    NSDateInterval * _timeFilter;
}

@property (readonly) NSURL *filepath;
@property (readonly, copy) NSArray *metricNames;
@property (readonly) NSPredicate *predicate;
@property (readonly, copy) NSString *sourceName;
@property (readonly) NSDateInterval *timeFilter;

+ (unsigned long long)_directionalityForMetricDefinition:(id)arg1;
+ (id)filterIntervalSet:(id)arg1 withTimeWindow:(id)arg2;

- (void).cxx_destruct;
- (id)filepath;
- (id)initWithFilepath:(id)arg1 tableName:(id)arg2 metricDefinition:(id)arg3 predicate:(id)arg4 timeFilter:(id)arg5;
- (id)initWithFilepath:(id)arg1 tableName:(id)arg2 metricName:(id)arg3 predicate:(id)arg4 timeFilter:(id)arg5;
- (id)metricNames;
- (id)parseData:(id*)arg1;
- (id)predicate;
- (id)sourceName;
- (id)timeFilter;

@end
