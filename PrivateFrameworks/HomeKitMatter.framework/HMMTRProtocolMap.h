
@interface HMMTRProtocolMap : HMFObject {
    NSDictionary * _hapToCHIPClusterMappingArray;
    NSDictionary * _rawPlist;
    NSNumber * _schemaVersion;
    NSNumber * _version;
}

@property (nonatomic, readonly) NSDictionary *hapToCHIPClusterMappingArray;
@property (nonatomic, readonly) NSDictionary *rawPlist;
@property (nonatomic, readonly) NSNumber *schemaVersion;
@property (nonatomic, readonly) NSNumber *version;

+ (bool)checkIfCharacteristicsIsOfTypeTemp:(id)arg1;
+ (id)customMapEventForCharacteristic:(id)arg1 event:(id)arg2 value:(id)arg3;
+ (id)customMapReadForCharacteristic:(id)arg1 value:(id)arg2 fromRange:(id)arg3 toRange:(id)arg4;
+ (id)customMapWriteForCharacteristic:(id)arg1 value:(id)arg2;
+ (id)linearMapForCharacteristic:(id)arg1 value:(id)arg2 fromRange:(id)arg3 toRange:(id)arg4;
+ (id)logCategory;
+ (id)mapActiveState:(id)arg1;
+ (id)mapCurrentHeatingCoolingState:(id)arg1;
+ (id)mapCurrentSystemMode:(id)arg1;
+ (id)mapFanMode:(id)arg1;
+ (id)mapPositionState:(id)arg1;
+ (id)mapTargetHeatingCoolingState:(id)arg1;
+ (id)mapTargetSystemMode:(id)arg1;
+ (id)protocolMap;

- (void).cxx_destruct;
- (id /* block */)_buildEventMapper:(id)arg1 characteristicsDict:(id)arg2;
- (id /* block */)_buildExpectedValueMapper:(id)arg1 characteristicsDict:(id)arg2 operation:(unsigned long long)arg3 valueMapper:(id /* block */)arg4;
- (id /* block */)_buildValueMapper:(id)arg1 characteristicsDict:(id)arg2 operation:(unsigned long long)arg3 forMTRCluster:(bool)arg4;
- (id)_characteristicDescriptionForCharacteristicWithUUID:(id)arg1 characteristicsDict:(id)arg2 chipClusterName:(id)arg3 operationType:(unsigned long long)arg4 value:(id)arg5 forMTRCluster:(bool)arg6;
- (id)_characteristicsDictionaryForCharacteristic:(id)arg1 endpointID:(unsigned long long)arg2 clusterIDCharacteristicMap:(id)arg3;
- (id)_characteristicsDictionaryForCharacteristicUUID:(id)arg1 endpointID:(unsigned long long)arg2 clusterIDCharacteristicMap:(id)arg3;
- (id)_chipClusterFunctionNameForOperationType:(unsigned long long)arg1 operationDictionary:(id)arg2 value:(id)arg3 forMTRCluster:(bool)arg4;
- (id)_chipParamsDictionaryForOperationType:(unsigned long long)arg1 operationDictionary:(id)arg2 value:(id)arg3;
- (id)_descriptionForCharacteristicUUID:(id)arg1 operation:(unsigned long long)arg2 value:(id)arg3 forMTRCluster:(bool)arg4 endpointID:(unsigned long long)arg5 clusterIDCharacteristicMap:(id)arg6;
- (bool)_isValidCharacteristicValue:(id)arg1 value:(id)arg2;
- (id)_mtrClusterReadFunctionNameFromBaseClusterFunctionName:(id)arg1;
- (id)_mtrClusterWriteFunctionNameFromBaseClusterFunctionName:(id)arg1;
- (id)_protocolMapCharacteristicsKeyForOperationType:(unsigned long long)arg1;
- (void)_selectedServiceTypeForServiceArray:(id)arg1 device:(id)arg2 endpoint:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)categoriesForDeviceTypes:(id)arg1;
- (id)descriptionForCharacteristicUUID:(id)arg1 operation:(unsigned long long)arg2 endpointID:(unsigned long long)arg3 clusterIDCharacteristicMap:(id)arg4;
- (id)descriptionForCharacteristicUUID:(id)arg1 operation:(unsigned long long)arg2 value:(id)arg3 endpointID:(unsigned long long)arg4 clusterIDCharacteristicMap:(id)arg5;
- (id)descriptionOfMTRClusterForCharacteristicUUID:(id)arg1 operation:(unsigned long long)arg2 value:(id)arg3 endpointID:(unsigned long long)arg4 clusterIDCharacteristicMap:(id)arg5;
- (id)getClusterClassForCharacteristic:(id)arg1 endpointID:(id)arg2 clusterIDCharacteristicMap:(id)arg3;
- (id)getIDForCharacteristic:(id)arg1;
- (id)getRequiredFeaturesBitmapForCharacteristic:(id)arg1;
- (id)getUpdatedLinkedCharacteristics:(id)arg1 endpointID:(id)arg2 clusterIDCharacteristicMap:(id)arg3;
- (id)hapToCHIPClusterMappingArray;
- (id)init;
- (id)optionalCharacteristicsForService:(id)arg1;
- (bool)optionalServiceLabelIndexIncludedInService:(id)arg1;
- (id)rawPlist;
- (id)reportDescriptionForCharacteristic:(id)arg1 endpointID:(id)arg2 clusterIDCharacteristicMap:(id)arg3;
- (id)requiredCharacteristicsForService:(id)arg1;
- (id)retrieveHAPToCHIPClusterMapping;
- (id)schemaVersion;
- (void)servicesForDeviceTypes:(id)arg1 device:(id)arg2 endpoint:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)updateMetadataForCharacteristic:(id)arg1 metadata:(id)arg2 endpointID:(id)arg3 topology:(id)arg4 clusterIDCharacteristicMap:(id)arg5;
- (id)version;

@end
