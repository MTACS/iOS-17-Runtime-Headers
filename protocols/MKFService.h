
@protocol MKFService <MKFModel, MKFServicePublicExtensions>

@required

- (<MKFHAPAccessory> *)accessory;
- (NSArray *)actionCharacteristicWrites;
- (<MKFApplicationData> *)applicationData;
- (NSUUID *)associatedServiceType;
- (NSArray *)characteristics;
- (NSNumber *)configurationState;
- (<MKFCharacteristic> *)createCharacteristicsRelationOfType:(Protocol *)arg1 instanceID:(NSNumber *)arg2;
- (<MKFCharacteristic> *)createCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(NSNumber *)arg1;
- (<MKFFloatCharacteristic> *)createCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(NSNumber *)arg1;
- (<MKFIntegerCharacteristic> *)createCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(NSNumber *)arg1;
- (<MKFStringCharacteristic> *)createCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(NSNumber *)arg1;
- (MKFServiceDatabaseID *)databaseID;
- (NSArray *)eventCharacteristics;
- (NSString *)expectedConfiguredName;
- (<MKFCharacteristic> *)findCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(NSNumber *)arg1;
- (<MKFFloatCharacteristic> *)findCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(NSNumber *)arg1;
- (<MKFIntegerCharacteristic> *)findCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(NSNumber *)arg1;
- (<MKFStringCharacteristic> *)findCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(NSNumber *)arg1;
- (<MKFHome> *)home;
- (NSNumber *)instanceID;
- (NSNumber *)labelIndex;
- (NSNumber *)labelNamespace;
- (NSNumber *)lastKnownDiscoveryMode;
- (NSNumber *)lastKnownOperatingState;
- (NSNumber *)lastKnownOperatingStateAbnormalReasons;
- (NSArray *)linkedServices;
- (<MKFApplicationData> *)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (<MKFCharacteristic> *)materializeOrCreateCharacteristicsRelationOfType:(Protocol *)arg1 instanceID:(NSNumber *)arg2 createdNew:(bool*)arg3;
- (<MKFCharacteristic> *)materializeOrCreateCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(bool*)arg2;
- (<MKFFloatCharacteristic> *)materializeOrCreateCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(bool*)arg2;
- (<MKFIntegerCharacteristic> *)materializeOrCreateCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(bool*)arg2;
- (<MKFStringCharacteristic> *)materializeOrCreateCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(NSNumber *)arg1 createdNew:(bool*)arg2;
- (NSArray *)mediaSourceDisplayOrder;
- (NSNumber *)mediaSourceIdentifier;
- (NSString *)name;
- (NSString *)providedName;
- (NSArray *)serviceGroups;
- (NSNumber *)serviceProperties;
- (NSUUID *)serviceSubtype;
- (NSUUID *)serviceType;
- (void)setApplicationData:(id <MKFApplicationData>)arg1;
- (void)setAssociatedServiceType:(NSUUID *)arg1;
- (void)setCharacteristics:(NSArray *)arg1;
- (void)setConfigurationState:(NSNumber *)arg1;
- (void)setExpectedConfiguredName:(NSString *)arg1;
- (void)setLabelIndex:(NSNumber *)arg1;
- (void)setLabelNamespace:(NSNumber *)arg1;
- (void)setLastKnownDiscoveryMode:(NSNumber *)arg1;
- (void)setLastKnownOperatingState:(NSNumber *)arg1;
- (void)setLastKnownOperatingStateAbnormalReasons:(NSNumber *)arg1;
- (void)setLinkedServices:(NSArray *)arg1;
- (void)setMediaSourceDisplayOrder:(NSArray *)arg1;
- (void)setMediaSourceIdentifier:(NSNumber *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setProvidedName:(NSString *)arg1;
- (void)setServiceProperties:(NSNumber *)arg1;
- (void)setServiceSubtype:(NSUUID *)arg1;
- (void)setServiceType:(NSUUID *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (void)synchronizeCharacteristicsRelationWith:(NSArray *)arg1;
- (NSDate *)writerTimestamp;

@end
