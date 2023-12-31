
@protocol UICollisionBehaviorDelegate <NSObject>

@optional

- (void)collisionBehavior:(UICollisionBehavior *)arg1 beganContactForItem:(id <UIDynamicItem>)arg2 withBoundaryIdentifier:(id <NSCopying>)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 beganContactForItem:(id <UIDynamicItem>)arg2 withItem:(id <UIDynamicItem>)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 endedContactForItem:(id <UIDynamicItem>)arg2 withBoundaryIdentifier:(id <NSCopying>)arg3;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 endedContactForItem:(id <UIDynamicItem>)arg2 withItem:(id <UIDynamicItem>)arg3;

@end
