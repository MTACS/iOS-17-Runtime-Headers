
@interface PPSSQLiteTimeSeriesIngester : NSObject <PPSDataIngesterProtocol> {
    bool  _convertTimestamp;
    NSURL * _filepath;
    unsigned long long  _limitCount;
    NSArray * _metricNames;
    unsigned long long  _offsetCount;
    NSPredicate * _predicate;
    unsigned long long  _readDirection;
    NSString * _sourceName;
    NSDateInterval * _timeFilter;
    PPSTimestampConverter * _timestampConverter;
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
- (id)initWithFilepath:(id)arg1 tableName:(id)arg2 metricDefinitions:(id)arg3 predicate:(id)arg4 timeFilter:(id)arg5 limitCount:(unsigned long long)arg6 offsetCount:(unsigned long long)arg7 readDirection:(unsigned long long)arg8 convertTimestamp:(bool)arg9 convertValue:(bool)arg10;
- (id)initWithFilepath:(id)arg1 tableName:(id)arg2 metricNames:(id)arg3 predicate:(id)arg4 timeFilter:(id)arg5 limitCount:(unsigned long long)arg6 offsetCount:(unsigned long long)arg7 readDirection:(unsigned long long)arg8 convertTimestamp:(bool)arg9;
- (id)metricNames;
- (id)parseData:(id*)arg1;
- (id)predicate;
- (id)sourceName;
- (id)timeFilter;

@end
