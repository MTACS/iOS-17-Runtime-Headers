
@interface PSLaunchTracker : NSObject {
    bool  _launchHasCompleted;
}

@property (nonatomic, readonly) bool launchHasCompleted;

+ (id)sharedInstance;

- (bool)launchHasCompleted;
- (void)setLaunchHasCompleted;

@end
