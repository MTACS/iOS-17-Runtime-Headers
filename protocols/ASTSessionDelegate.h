
@protocol ASTSessionDelegate <NSObject>

@required

- (void)session:(ASTSession *)arg1 cancelTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didEndWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 profile:(ASTProfileResult *)arg2 filteredByComponents:(NSArray *)arg3;
- (void)session:(ASTSession *)arg1 startTest:(NSNumber *)arg2 parameters:(NSDictionary *)arg3 testResult:(ASTTestResult *)arg4;

@optional

- (void)session:(ASTSession *)arg1 didCompleteTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didFinishSendingResultForTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didPauseSendingResultForTest:(NSNumber *)arg2 error:(NSError *)arg3;
- (void)session:(ASTSession *)arg1 didPauseWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 didResumeSendingResultForTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didStartTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(void *)arg1 didUpdateSettings:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ASTSession *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteImage:(NSData *)arg2;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteProgress:(NSNumber *)arg2;
- (NSNumber *)session:(ASTSession *)arg1 estimatedTimeRemainingForTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 performActions:(NSArray *)arg2 sequentially:(bool)arg3 stopOnError:(bool)arg4;
- (NSNumber *)session:(ASTSession *)arg1 progressForTest:(NSNumber *)arg2;
- (void)sessionDidAbortWhilePerformingActions:(ASTSession *)arg1;
- (void)sessionDidCancelSuite:(ASTSession *)arg1;
- (void)sessionDidInvalidate:(ASTSession *)arg1;
- (void)sessionDidReboot:(ASTSession *)arg1;
- (void)sessionDidReboot:(ASTSession *)arg1 withParameters:(NSDictionary *)arg2;
- (void)sessionDidResume:(ASTSession *)arg1;
- (void)sessionDidShutDown:(ASTSession *)arg1 withParameters:(NSDictionary *)arg2;
- (void)sessionDidStart:(ASTSession *)arg1;

@end
