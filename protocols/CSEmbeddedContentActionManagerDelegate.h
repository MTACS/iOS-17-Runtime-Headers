
@protocol CSEmbeddedContentActionManagerDelegate <NSObject>

@required

- (void)actionManager:(CSEmbeddedContentActionManager *)arg1 addedAction:(SBSLockScreenContentAction *)arg2;
- (void)actionManager:(CSEmbeddedContentActionManager *)arg1 removedAction:(SBSLockScreenContentAction *)arg2;

@end
