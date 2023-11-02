
@protocol FPOperationProgressDelegate <NSObject>

@required

- (void)operation:(FPOperation *)arg1 didReceiveProgressInfo:(NSDictionary *)arg2 error:(NSError *)arg3;

@end
