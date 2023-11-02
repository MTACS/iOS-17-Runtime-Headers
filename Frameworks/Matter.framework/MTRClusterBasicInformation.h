
@interface MTRClusterBasicInformation : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (void)mfgSpecificPingWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)mfgSpecificPingWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeCapabilityMinimaWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeDataModelRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeHardwareVersionStringWithParams:(id)arg1;
- (id)readAttributeHardwareVersionWithParams:(id)arg1;
- (id)readAttributeLocalConfigDisabledWithParams:(id)arg1;
- (id)readAttributeLocationWithParams:(id)arg1;
- (id)readAttributeManufacturingDateWithParams:(id)arg1;
- (id)readAttributeNodeLabelWithParams:(id)arg1;
- (id)readAttributePartNumberWithParams:(id)arg1;
- (id)readAttributeProductAppearanceWithParams:(id)arg1;
- (id)readAttributeProductIDWithParams:(id)arg1;
- (id)readAttributeProductLabelWithParams:(id)arg1;
- (id)readAttributeProductNameWithParams:(id)arg1;
- (id)readAttributeProductURLWithParams:(id)arg1;
- (id)readAttributeReachableWithParams:(id)arg1;
- (id)readAttributeSerialNumberWithParams:(id)arg1;
- (id)readAttributeSoftwareVersionStringWithParams:(id)arg1;
- (id)readAttributeSoftwareVersionWithParams:(id)arg1;
- (id)readAttributeUniqueIDWithParams:(id)arg1;
- (id)readAttributeVendorIDWithParams:(id)arg1;
- (id)readAttributeVendorNameWithParams:(id)arg1;
- (void)writeAttributeLocalConfigDisabledWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLocalConfigDisabledWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLocationWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLocationWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeNodeLabelWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeNodeLabelWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
