
@interface OS_xpc_rich_error : OS_xpc_object <OS_xpc_rich_error>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

@end
