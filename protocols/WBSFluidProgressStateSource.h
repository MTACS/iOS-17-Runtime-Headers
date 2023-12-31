
@protocol WBSFluidProgressStateSource <NSObject>

@required

- (void)clearFluidProgressState;
- (bool)createFluidProgressState;
- (double)estimatedProgress;
- (NSURL *)expectedOrCurrentURL;
- (bool)hasFailedURL;
- (WBSFluidProgressState *)progressState;

@end
