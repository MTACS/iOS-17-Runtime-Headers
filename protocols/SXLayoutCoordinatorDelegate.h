
@protocol SXLayoutCoordinatorDelegate <NSObject>

@optional

- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 cancelledLayoutWithOptions:(SXLayoutOptions *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 didIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willLayoutWithParameters:(SXLayoutParameters *)arg2;

@end
