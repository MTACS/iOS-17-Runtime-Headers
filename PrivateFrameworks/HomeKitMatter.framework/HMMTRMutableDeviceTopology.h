
@interface HMMTRMutableDeviceTopology : HMMTRDeviceTopology

@property (nonatomic, retain) NSMutableDictionary *clustersInUse;
@property (nonatomic, retain) NSMutableDictionary *deviceAttributeValues;
@property (nonatomic, retain) NSMutableDictionary *deviceFeatureMapValues;
@property (nonatomic, retain) NSMutableDictionary *fixedLabels;
@property (nonatomic, retain) NSMutableDictionary *hapCategories;
@property (nonatomic, retain) NSMutableDictionary *hapDisabledCharacteristics;
@property (nonatomic, retain) NSMutableDictionary *hapServiceTypes;
@property (nonatomic, retain) NSMutableDictionary *nodeLabels;
@property (nonatomic, retain) NSMutableDictionary *otaRequestorEndpoints;
@property (nonatomic, retain) NSMutableDictionary *partsList;
@property (nonatomic, retain) NSMutableDictionary *versions;

- (void)addDeviceAttributeValues:(id)arg1 clusterClassName:(id)arg2 attributeName:(id)arg3 atEndpoint:(id)arg4;
- (void)addDeviceFeatureMapValue:(id)arg1 clusterClassName:(id)arg2 atEndpoint:(id)arg3;
- (void)addHAPDisabledCharacteristic:(id)arg1 atEndpoint:(id)arg2 hapServiceType:(id)arg3;
- (void)setClustersInUse:(id)arg1 atEndpoint:(id)arg2;
- (void)setDeviceAttributeValues:(id)arg1 atEndpoint:(id)arg2;
- (void)setDeviceFeatureMapValues:(id)arg1 atEndpoint:(id)arg2;
- (void)setFixedLabels:(id)arg1 atEndpoint:(id)arg2;
- (void)setHAPCategories:(id)arg1 atEndpoint:(id)arg2;
- (void)setHAPDisabledCharacteristics:(id)arg1 atEndpoint:(id)arg2;
- (void)setHAPServiceTypes:(id)arg1 atEndpoint:(id)arg2;
- (void)setNodeLabel:(id)arg1 atEndpoint:(id)arg2;
- (void)setOTARequestorEnabled:(bool)arg1 atEndpoint:(id)arg2;
- (void)setPartsList:(id)arg1 atEndpoint:(id)arg2;
- (void)setVersion:(id)arg1 for:(id)arg2;
- (id)storeForNodeId:(id)arg1 server:(id)arg2;

@end
