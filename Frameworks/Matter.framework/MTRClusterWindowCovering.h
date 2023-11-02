
@interface MTRClusterWindowCovering : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (id)device;
- (void)downOrCloseWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)downOrCloseWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)downOrCloseWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)downOrCloseWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned short)endpoint;
- (void)goToLiftPercentageWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)goToLiftPercentageWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)goToLiftValueWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)goToLiftValueWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)goToTiltPercentageWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)goToTiltPercentageWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)goToTiltValueWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)goToTiltValueWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeConfigStatusWithParams:(id)arg1;
- (id)readAttributeCurrentPositionLiftPercent100thsWithParams:(id)arg1;
- (id)readAttributeCurrentPositionLiftPercentageWithParams:(id)arg1;
- (id)readAttributeCurrentPositionLiftWithParams:(id)arg1;
- (id)readAttributeCurrentPositionTiltPercent100thsWithParams:(id)arg1;
- (id)readAttributeCurrentPositionTiltPercentageWithParams:(id)arg1;
- (id)readAttributeCurrentPositionTiltWithParams:(id)arg1;
- (id)readAttributeEndProductTypeWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeInstalledClosedLimitLiftWithParams:(id)arg1;
- (id)readAttributeInstalledClosedLimitTiltWithParams:(id)arg1;
- (id)readAttributeInstalledOpenLimitLiftWithParams:(id)arg1;
- (id)readAttributeInstalledOpenLimitTiltWithParams:(id)arg1;
- (id)readAttributeModeWithParams:(id)arg1;
- (id)readAttributeNumberOfActuationsLiftWithParams:(id)arg1;
- (id)readAttributeNumberOfActuationsTiltWithParams:(id)arg1;
- (id)readAttributeOperationalStatusWithParams:(id)arg1;
- (id)readAttributePhysicalClosedLimitLiftWithParams:(id)arg1;
- (id)readAttributePhysicalClosedLimitTiltWithParams:(id)arg1;
- (id)readAttributeSafetyStatusWithParams:(id)arg1;
- (id)readAttributeTargetPositionLiftPercent100thsWithParams:(id)arg1;
- (id)readAttributeTargetPositionTiltPercent100thsWithParams:(id)arg1;
- (id)readAttributeTypeWithParams:(id)arg1;
- (void)stopMotionWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)stopMotionWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stopMotionWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)stopMotionWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)upOrOpenWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)upOrOpenWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)upOrOpenWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)upOrOpenWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeAttributeModeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeModeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
