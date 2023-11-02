
@interface OS_dispatch_queue_runloop : OS_dispatch_queue_serial <OS_dispatch_queue_runloop>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_xref_dispose;
- (id)init;
- (oneway void)release;

@end
