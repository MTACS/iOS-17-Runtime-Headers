
@interface MTRClusterFanControl : MTRCluster {
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
- (id)readAttributeFanModeSequenceWithParams:(id)arg1;
- (id)readAttributeFanModeWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributePercentCurrentWithParams:(id)arg1;
- (id)readAttributePercentSettingWithParams:(id)arg1;
- (id)readAttributeRockSettingWithParams:(id)arg1;
- (id)readAttributeRockSupportWithParams:(id)arg1;
- (id)readAttributeSpeedCurrentWithParams:(id)arg1;
- (id)readAttributeSpeedMaxWithParams:(id)arg1;
- (id)readAttributeSpeedSettingWithParams:(id)arg1;
- (id)readAttributeWindSettingWithParams:(id)arg1;
- (id)readAttributeWindSupportWithParams:(id)arg1;
- (void)writeAttributeFanModeSequenceWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeFanModeSequenceWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeFanModeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeFanModeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributePercentSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePercentSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeRockSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeRockSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeSpeedSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeSpeedSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeWindSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeWindSettingWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
