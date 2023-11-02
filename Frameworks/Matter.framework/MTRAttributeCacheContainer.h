
@interface MTRAttributeCacheContainer : NSObject {
    MTRClusterStateCacheContainer * _realContainer;
}

@property (nonatomic, readonly) MTRClusterStateCacheContainer *realContainer;

- (void).cxx_destruct;
- (id)init;
- (void)readAttributeWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3 clientQueue:(id)arg4 completion:(id /* block */)arg5;
- (id)realContainer;

@end
