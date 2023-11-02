
@protocol SBSProximityHandoffUICallerDelegate <NSObject>

@required

- (void)handoffCancelled;
- (void)handoffCompleted;
- (void)handoffInactive;
- (void)handoffStarted;
- (void)handoffUpdating;

@end
