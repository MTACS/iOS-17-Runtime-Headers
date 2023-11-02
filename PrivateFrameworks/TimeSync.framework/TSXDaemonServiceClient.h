
@interface TSXDaemonServiceClient : TSXClient {
    bool  _inited;
}

+ (id)clientProtocol;
+ (id)serverProtocol;
+ (id)serviceName;
+ (id)sharedDaemonServiceClient;

- (bool)callMethodForDaemonClient:(unsigned int)arg1 clientMethodSelector:(unsigned int)arg2 scalarInputs:(const unsigned long long*)arg3 scalarInputCount:(unsigned int)arg4 structInput:(const void*)arg5 structInputSize:(unsigned long long)arg6 scalarOutputs:(unsigned long long*)arg7 scalarOutputCount:(unsigned int*)arg8 error:(id*)arg9;
- (bool)closeDaemonClient:(unsigned int)arg1 error:(id*)arg2;
- (id)exportedObject;
- (id)init;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (unsigned int)openDaemonClientWithRegistryEntryID:(unsigned long long)arg1 clientType:(unsigned int)arg2 error:(id*)arg3;
- (id)propertiesForRegistryEntryID:(unsigned long long)arg1;
- (id)propertyForRegistryEntryID:(unsigned long long)arg1 key:(id)arg2;

@end
