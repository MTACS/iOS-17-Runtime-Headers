
@protocol AVTPhysicsControllerDelegate <NSObject>

@required

- (SCNNode *)avatarNodeForPhysicsController:(AVTPhysicsController *)arg1;
- (double)physicsController:(AVTPhysicsController *)arg1 downforceForNodeNamed:(NSString *)arg2;

@end
