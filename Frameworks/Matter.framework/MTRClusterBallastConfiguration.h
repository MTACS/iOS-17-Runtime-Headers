
@interface MTRClusterBallastConfiguration : MTRCluster {
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
- (id)readAttributeBallastFactorAdjustmentWithParams:(id)arg1;
- (id)readAttributeBallastStatusWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeIntrinsicBalanceFactorWithParams:(id)arg1;
- (id)readAttributeIntrinsicBallastFactorWithParams:(id)arg1;
- (id)readAttributeLampAlarmModeWithParams:(id)arg1;
- (id)readAttributeLampBurnHoursTripPointWithParams:(id)arg1;
- (id)readAttributeLampBurnHoursWithParams:(id)arg1;
- (id)readAttributeLampManufacturerWithParams:(id)arg1;
- (id)readAttributeLampQuantityWithParams:(id)arg1;
- (id)readAttributeLampRatedHoursWithParams:(id)arg1;
- (id)readAttributeLampTypeWithParams:(id)arg1;
- (id)readAttributeMaxLevelWithParams:(id)arg1;
- (id)readAttributeMinLevelWithParams:(id)arg1;
- (id)readAttributePhysicalMaxLevelWithParams:(id)arg1;
- (id)readAttributePhysicalMinLevelWithParams:(id)arg1;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeIntrinsicBallastFactorWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeIntrinsicBallastFactorWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLampAlarmModeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLampAlarmModeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLampBurnHoursWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLampBurnHoursWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLampManufacturerWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLampManufacturerWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLampRatedHoursWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLampRatedHoursWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLampTypeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLampTypeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeMaxLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeMaxLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeMinLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeMinLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
