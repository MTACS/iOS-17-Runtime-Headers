
@protocol PKPhysicsContactDelegate <NSObject>

@optional

- (void)didBeginContact:(PKPhysicsContact *)arg1;
- (void)didEndContact:(PKPhysicsContact *)arg1;

@end
