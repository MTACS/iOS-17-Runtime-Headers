
@protocol SXLayoutCoordinator <NSObject>

@required

- (<SXLayoutCoordinatorDelegate> *)delegate;
- (void)layoutWithOptions:(SXLayoutOptions *)arg1;
- (void)setDelegate:(id <SXLayoutCoordinatorDelegate>)arg1;

@end
