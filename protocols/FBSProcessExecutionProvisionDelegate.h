
@protocol FBSProcessExecutionProvisionDelegate <NSObject>

@required

- (void)provision:(FBSProcessExecutionProvision *)arg1 wasViolatedWithError:(NSError *)arg2;

@end
