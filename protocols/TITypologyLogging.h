
@protocol TITypologyLogging

@required

- (void)logRecord:(TITypologyRecord *)arg1;
- (void)logRecord:(TITypologyRecord *)arg1 trace:(NSString *)arg2;
- (bool)loggedRecordOfClass:(Class)arg1;
- (unsigned long long)maxNumRecords;
- (unsigned long long)numTraceRecords;
- (unsigned long long)numTypologyRecords;
- (NSString *)recordSummary;
- (NSString *)textSummary;

@end
