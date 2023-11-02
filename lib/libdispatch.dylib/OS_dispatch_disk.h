
@interface OS_dispatch_disk : OS_dispatch_object <OS_dispatch_disk>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;

@end
