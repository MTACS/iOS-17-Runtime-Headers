
@interface MTRClusterContentLauncher : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (void)launchContentWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)launchContentWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)launchURLWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)launchURLWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)readAttributeAcceptHeaderWithParams:(id)arg1;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeSupportedStreamingProtocolsWithParams:(id)arg1;
- (void)writeAttributeSupportedStreamingProtocolsWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeSupportedStreamingProtocolsWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
