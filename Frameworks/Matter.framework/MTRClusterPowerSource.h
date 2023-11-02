
@interface MTRClusterPowerSource : MTRCluster {
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
- (id)readAttributeActiveBatChargeFaultsWithParams:(id)arg1;
- (id)readAttributeActiveBatFaultsWithParams:(id)arg1;
- (id)readAttributeActiveWiredFaultsWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeBatANSIDesignationWithParams:(id)arg1;
- (id)readAttributeBatApprovedChemistryWithParams:(id)arg1;
- (id)readAttributeBatCapacityWithParams:(id)arg1;
- (id)readAttributeBatChargeLevelWithParams:(id)arg1;
- (id)readAttributeBatChargeStateWithParams:(id)arg1;
- (id)readAttributeBatChargingCurrentWithParams:(id)arg1;
- (id)readAttributeBatCommonDesignationWithParams:(id)arg1;
- (id)readAttributeBatFunctionalWhileChargingWithParams:(id)arg1;
- (id)readAttributeBatIECDesignationWithParams:(id)arg1;
- (id)readAttributeBatPercentRemainingWithParams:(id)arg1;
- (id)readAttributeBatPresentWithParams:(id)arg1;
- (id)readAttributeBatQuantityWithParams:(id)arg1;
- (id)readAttributeBatReplaceabilityWithParams:(id)arg1;
- (id)readAttributeBatReplacementDescriptionWithParams:(id)arg1;
- (id)readAttributeBatReplacementNeededWithParams:(id)arg1;
- (id)readAttributeBatTimeRemainingWithParams:(id)arg1;
- (id)readAttributeBatTimeToFullChargeWithParams:(id)arg1;
- (id)readAttributeBatVoltageWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeDescriptionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeOrderWithParams:(id)arg1;
- (id)readAttributeStatusWithParams:(id)arg1;
- (id)readAttributeWiredAssessedCurrentWithParams:(id)arg1;
- (id)readAttributeWiredAssessedInputFrequencyWithParams:(id)arg1;
- (id)readAttributeWiredAssessedInputVoltageWithParams:(id)arg1;
- (id)readAttributeWiredCurrentTypeWithParams:(id)arg1;
- (id)readAttributeWiredMaximumCurrentWithParams:(id)arg1;
- (id)readAttributeWiredNominalVoltageWithParams:(id)arg1;
- (id)readAttributeWiredPresentWithParams:(id)arg1;

@end
