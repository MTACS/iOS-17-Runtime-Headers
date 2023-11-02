
@interface _HDMaintenanceWorkCoordinatorSynchronousOperation : HDMaintenanceOperation {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)main;

@end
