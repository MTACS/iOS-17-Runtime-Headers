
@interface MSVXPCConnection : NSXPCConnection

+ (void)registerLocalListener:(id)arg1 withServiceName:(id)arg2;
+ (void)unregisterLocalListerWithName:(id)arg1;

- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;

@end
