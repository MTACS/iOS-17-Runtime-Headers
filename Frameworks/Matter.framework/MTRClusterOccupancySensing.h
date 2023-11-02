
@interface MTRClusterOccupancySensing : MTRCluster {
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
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeOccupancySensorTypeBitmapWithParams:(id)arg1;
- (id)readAttributeOccupancySensorTypeWithParams:(id)arg1;
- (id)readAttributeOccupancyWithParams:(id)arg1;
- (id)readAttributePIROccupiedToUnoccupiedDelayWithParams:(id)arg1;
- (id)readAttributePIRUnoccupiedToOccupiedDelayWithParams:(id)arg1;
- (id)readAttributePIRUnoccupiedToOccupiedThresholdWithParams:(id)arg1;
- (id)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithParams:(id)arg1;
- (id)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithParams:(id)arg1;
- (id)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithParams:(id)arg1;
- (id)readAttributePirOccupiedToUnoccupiedDelayWithParams:(id)arg1;
- (id)readAttributePirUnoccupiedToOccupiedDelayWithParams:(id)arg1;
- (id)readAttributePirUnoccupiedToOccupiedThresholdWithParams:(id)arg1;
- (id)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithParams:(id)arg1;
- (id)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithParams:(id)arg1;
- (id)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithParams:(id)arg1;
- (void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
