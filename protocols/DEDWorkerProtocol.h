
@protocol DEDWorkerProtocol <NSObject>

@required

- (void)addSessionData:(NSData *)arg1 withFilename:(NSString *)arg2 forSession:(NSString *)arg3;
- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)cancelSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)getSessionStateWithSession:(NSString *)arg1;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)loadTextDataForExtensions:(NSSet *)arg1 localization:(NSString *)arg2 sessionID:(NSString *)arg3;
- (void)pingSession:(NSString *)arg1;
- (void)scheduleNotificationForSession:(NSString *)arg1;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 deferRunUntil:(NSDate *)arg3 session:(NSString *)arg4;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)syncSessionStatusWithSession:(NSString *)arg1;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (long long)transportType;
- (void)unscheduleNotificationForSession:(NSString *)arg1;

@end
