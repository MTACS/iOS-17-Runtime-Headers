
@interface MTRClusterGeneralCommissioning : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (void)armFailSafeWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)armFailSafeWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)commissioningCompleteWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)commissioningCompleteWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)commissioningCompleteWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)commissioningCompleteWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeBasicCommissioningInfoWithParams:(id)arg1;
- (id)readAttributeBreadcrumbWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeLocationCapabilityWithParams:(id)arg1;
- (id)readAttributeRegulatoryConfigWithParams:(id)arg1;
- (id)readAttributeSupportsConcurrentConnectionWithParams:(id)arg1;
- (void)setRegulatoryConfigWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)setRegulatoryConfigWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeAttributeBreadcrumbWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBreadcrumbWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
