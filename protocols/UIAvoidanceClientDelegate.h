
@protocol UIAvoidanceClientDelegate <NSObject>

@required

- (NSValue *)avoid:(NSDictionary *)arg1 forClient:(id <UIAvoidanceClient>)arg2 withCoordinator:(UIAvoidanceCoordinator *)arg3;

@end
