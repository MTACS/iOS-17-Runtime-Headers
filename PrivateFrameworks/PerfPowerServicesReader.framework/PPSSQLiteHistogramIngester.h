
@interface PPSSQLiteHistogramIngester : NSObject <PPSDataIngesterProtocol> {
    NSArray * _dimensions;
    NSURL * _filepath;
    NSArray * _metricNames;
    NSPredicate * _predicate;
    NSString * _sourceName;
    NSDateInterval * _timeFilter;
    PPSValueConverter * _valueConverter;
}

@property (readonly) NSURL *filepath;
@property (readonly, copy) NSArray *metricNames;
@property (readonly) NSPredicate *predicate;
@property (readonly, copy) NSString *sourceName;
@property (readonly) NSDateInterval *timeFilter;

- (void).cxx_destruct;
- (id)_convertSQLiteDataFromQuery:(id)arg1 withProperties:(id)arg2 error:(id*)arg3;
- (id)filepath;
- (id)initWithFilepath:(id)arg1 tableName:(id)arg2 metricDefinitions:(id)arg3 predicate:(id)arg4 timeFilter:(id)arg5 dimensions:(id)arg6 convertValue:(bool)arg7;
- (id)initWithFilepath:(id)arg1 tableName:(id)arg2 metricNames:(id)arg3 predicate:(id)arg4 timeFilter:(id)arg5 dimensions:(id)arg6;
- (id)metricNames;
- (id)parseData:(id*)arg1;
- (id)predicate;
- (id)sourceName;
- (id)timeFilter;

@end
