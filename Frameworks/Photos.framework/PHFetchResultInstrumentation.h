
@interface PHFetchResultInstrumentation : NSObject <NSSQLiteDatabaseTraceDelegate> {
    long long  _byteCount;
    double  _duration;
    PHFetchResult * _fetchResult;
    struct { 
        NSObject<OS_os_log> *log; 
        unsigned long long signpostId; 
    }  _fetchSignpost;
    NSString * _importantFetchName;
    struct { 
        NSObject<OS_os_log> *log; 
        unsigned long long signpostId; 
    }  _importantFetchSignpost;
    long long  _rowCount;
    NSSQLiteDatabaseStatistics * _statsStart;
    bool  _suppressSlowFetchReports;
    double  _timeStart;
    bool  _wasTrackingStatistics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)areBacktracesEnabled;
- (void)beginTrackingStatisticsWithContext:(id)arg1;
- (long long)bytesPerRow;
- (unsigned char)classifyFetchPerformanceLogLevel;
- (void)classifyFetchPerformanceWithTuple:(id /* block */)arg1;
- (void)didExecuteFetchRequestWithContext:(id)arg1 resultCount:(unsigned long long)arg2 sqlString:(id)arg3 bindVariables:(id)arg4;
- (void)didFailFetchRequestWithContext:(id)arg1;
- (void)endTrackingStatisticsWithContext:(id)arg1 resultCount:(unsigned long long)arg2 sqlString:(id)arg3 bindVariables:(id)arg4;
- (id)formatBindVariable:(id)arg1;
- (id)formatSqlString:(id)arg1 withBindVariables:(id)arg2;
- (bool)isPerformanceLoggingDisabled;
- (void)logFetchWithSqlString:(id)arg1 bindVariables:(id)arg2;
- (void)managedObjectContext:(id)arg1 didExecuteFetchRequest:(id)arg2 withSQLString:(id)arg3 bindVariables:(id)arg4 rowCount:(long long)arg5;
- (void)managedObjectContext:(id)arg1 willExecuteFetchRequest:(id)arg2;
- (void)willExecuteFetchRequestWithContext:(id)arg1;

@end
