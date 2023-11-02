
@protocol TITraceLogParsingDelegate

@required

- (void)traceHeaderParsed:(NSDictionary *)arg1;
- (void)traceRecordParsed:(TITraceLogRecord *)arg1;

@end
