
@interface MTRClusterBinaryInputBasic : MTRCluster {
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
- (id)readAttributeActiveTextWithParams:(id)arg1;
- (id)readAttributeApplicationTypeWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeDescriptionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeInactiveTextWithParams:(id)arg1;
- (id)readAttributeOutOfServiceWithParams:(id)arg1;
- (id)readAttributePolarityWithParams:(id)arg1;
- (id)readAttributePresentValueWithParams:(id)arg1;
- (id)readAttributeReliabilityWithParams:(id)arg1;
- (id)readAttributeStatusFlagsWithParams:(id)arg1;
- (void)writeAttributeActiveTextWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeActiveTextWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeDescriptionWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeDescriptionWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeInactiveTextWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeInactiveTextWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeOutOfServiceWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOutOfServiceWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePresentValueWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePresentValueWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeReliabilityWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeReliabilityWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
