
@interface OS_dispatch_mach : OS_dispatch_object <OS_dispatch_mach>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_xref_dispose;
- (id)init;
- (oneway void)release;

@end
