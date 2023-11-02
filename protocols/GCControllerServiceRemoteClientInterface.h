
@protocol GCControllerServiceRemoteClientInterface

@required

- (void)publishControllers:(NSArray *)arg1;
- (void)refreshControllers;
- (void)unpublishControllersWithIdentifiers:(NSArray *)arg1;

@end
