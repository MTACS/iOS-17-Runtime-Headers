
@interface OS_dispatch_queue_mgr : OS_dispatch_queue_serial <OS_dispatch_queue_mgr>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;

@end
