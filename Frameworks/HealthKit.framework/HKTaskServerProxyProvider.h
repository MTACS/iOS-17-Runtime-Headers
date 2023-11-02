
@interface HKTaskServerProxyProvider : HKProxyProvider {
    NSUUID * _instanceUUID;
    NSURL * _pluginURL;
    HKTaskConfiguration * _taskConfiguration;
    NSUUID * _taskUUID;
}

@property (nonatomic, copy) NSURL *pluginURL;
@property (copy) HKTaskConfiguration *taskConfiguration;
@property (nonatomic, readonly, copy) NSString *taskIdentifier;
@property (nonatomic, readonly, copy) NSUUID *taskUUID;

- (void).cxx_destruct;
- (id)debugIdentifier;
- (void)fetchProxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 endpointHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteInterface:(id)arg5 taskUUID:(id)arg6;
- (id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 taskUUID:(id)arg4;
- (id)pluginURL;
- (id)proxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 error:(id*)arg3;
- (void)setPluginURL:(id)arg1;
- (void)setTaskConfiguration:(id)arg1;
- (id)taskConfiguration;
- (id)taskIdentifier;
- (id)taskUUID;

@end
