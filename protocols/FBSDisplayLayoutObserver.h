
@protocol FBSDisplayLayoutObserver <NSObject>

@optional

- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2;
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2 withContext:(FBSDisplayLayoutTransitionContext *)arg3;

@end
