
@interface UIAvoidanceLargestArea : NSObject <UIAvoidanceClientDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)avoid:(id)arg1 forClient:(id)arg2 withCoordinator:(id)arg3;

@end
