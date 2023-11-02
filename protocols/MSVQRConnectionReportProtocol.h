
@protocol MSVQRConnectionReportProtocol <NSObject>

@required

- (void)endEvent:(NSString *)arg1;
- (void)endEvent:(NSString *)arg1 withError:(NSError *)arg2;
- (NSString *)formattedReport;
- (void)startEvent:(NSString *)arg1;
- (void)startEvent:(NSString *)arg1 withParentEvent:(NSString *)arg2;

@end
