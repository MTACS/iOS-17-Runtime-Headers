
@protocol CSBackgroundContentActionManagerDelegate <NSObject>

@required

- (void)backgroundContentActionManager:(CSBackgroundContentActionManager *)arg1 addedAction:(SBSLockScreenContentAction *)arg2;
- (void)backgroundContentActionManager:(CSBackgroundContentActionManager *)arg1 removedAction:(SBSLockScreenContentAction *)arg2;

@end
