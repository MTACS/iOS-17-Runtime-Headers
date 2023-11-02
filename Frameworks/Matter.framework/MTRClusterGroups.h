
@interface MTRClusterGroups : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (void)addGroupIfIdentifyingWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)addGroupIfIdentifyingWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addGroupWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)addGroupWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)device;
- (unsigned short)endpoint;
- (void)getGroupMembershipWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)getGroupMembershipWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeNameSupportWithParams:(id)arg1;
- (void)removeAllGroupsWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAllGroupsWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeAllGroupsWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)removeAllGroupsWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removeGroupWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)removeGroupWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)viewGroupWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)viewGroupWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
