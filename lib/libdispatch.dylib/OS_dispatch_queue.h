
@interface OS_dispatch_queue : OS_dispatch_object <OS_dispatch_queue>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_xref_dispose;
- (id)description;
- (id)init;
- (oneway void)release;

@end
