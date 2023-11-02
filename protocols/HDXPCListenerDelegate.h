
@protocol HDXPCListenerDelegate <NSObject>

@required

- (<_HKXPCExportable> *)exportObjectForListener:(HDXPCListener *)arg1 client:(HDXPCClient *)arg2 error:(id*)arg3;

@optional

- (void)connectionConfiguredForListener:(HDXPCListener *)arg1 client:(HDXPCClient *)arg2 exportedObject:(id <_HKXPCExportable>)arg3;
- (void)connectionInvalidatedForListener:(HDXPCListener *)arg1 client:(HDXPCClient *)arg2 exportedObject:(id <_HKXPCExportable>)arg3;

@end
