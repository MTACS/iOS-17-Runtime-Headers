
@protocol FBProcessWatchdogProviding <NSObject>

@required

- (FBSProcessWatchdogPolicy *)watchdogPolicyForProcess:(FBProcess *)arg1 eventContext:(FBProcessWatchdogEventContext *)arg2;

@optional

- (FBSProcessTerminationRequest *)watchdogTerminationRequestForProcess:(FBProcess *)arg1 error:(NSError *)arg2;

@end
