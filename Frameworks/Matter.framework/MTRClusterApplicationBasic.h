
@interface MTRClusterApplicationBasic : MTRCluster {
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
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAllowedVendorListWithParams:(id)arg1;
- (id)readAttributeApplicationNameWithParams:(id)arg1;
- (id)readAttributeApplicationVersionWithParams:(id)arg1;
- (id)readAttributeApplicationWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeProductIDWithParams:(id)arg1;
- (id)readAttributeStatusWithParams:(id)arg1;
- (id)readAttributeVendorIDWithParams:(id)arg1;
- (id)readAttributeVendorNameWithParams:(id)arg1;

@end
