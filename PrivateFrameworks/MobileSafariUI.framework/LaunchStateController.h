
@interface LaunchStateController : NSObject {
    NSMutableArray * _actionBlocks;
    bool  _hasCompletedLaunch;
}

@property (nonatomic, readonly) bool hasCompletedLaunch;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)applicationUIDidBecomeActive;
- (void)doAfterUIBecomesActive:(id /* block */)arg1;
- (void)forceMarkUIBecomeActiveForTesting;
- (bool)hasCompletedLaunch;
- (id)init;

@end
