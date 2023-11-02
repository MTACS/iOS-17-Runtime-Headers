
@protocol RemoteUIActivating <NSObject>

@required

- (bool)activateUIWithParams:(RemoteUIParams *)arg1;
- (<RemoteUIActivatorDelegate> *)delegate;
- (bool)invalidated;
- (void)setDelegate:(id <RemoteUIActivatorDelegate>)arg1;

@end
