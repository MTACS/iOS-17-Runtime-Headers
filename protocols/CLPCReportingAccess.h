
@protocol CLPCReportingAccess

@required

- (bool)enableStats:(CLPCReportingStatSelection *)arg1 error:(id*)arg2;
- (CLPCReportingStatSelection *)enabledStats;
- (CLPCReportingReadResult *)readDeltaStats:(id*)arg1;
- (CLPCReportingReadResult *)readStats:(id*)arg1;
- (unsigned long long)schemaIDForStatID:(unsigned long long)arg1 error:(id*)arg2;
- (CLPCReportingStatSelection *)supportedStats;

@end
