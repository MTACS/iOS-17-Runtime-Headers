
@protocol TRITaskQueueStateProviding

@required

- (TRIRunningXPCActivityDescriptor *)activeActivityDescriptorGrantingCapability:(unsigned long long)arg1;
- (NSObject<OS_xpc_object> *)activeActivityGrantingCapability:(unsigned long long)arg1;

@end
