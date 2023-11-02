
@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject <HDBlockDispatcher> {
    HDMaintenanceWorkCoordinator * _maintenanceWorkCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dispatchBlock:(id /* block */)arg1 name:(id)arg2;
- (id)init;
- (id)initWithMaintenanceWorkCoordinator:(id)arg1;

@end
