
@interface HMMTRDeviceTopology : HMFObject {
    NSMutableDictionary * _clustersInUse;
    NSMutableDictionary * _deviceAttributeValues;
    NSMutableDictionary * _deviceFeatureMapValues;
    NSMutableDictionary * _fixedLabels;
    NSMutableDictionary * _hapCategories;
    NSMutableDictionary * _hapDisabledCharacteristics;
    NSMutableDictionary * _hapServiceTypes;
    NSMutableDictionary * _nodeLabels;
    NSMutableDictionary * _otaRequestorEndpoints;
    NSMutableDictionary * _partsList;
    NSMutableDictionary * _versions;
}

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

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)clustersInUse;
- (id)description;
- (id)deviceAttributeValues;
- (id)deviceFeatureMapValues;
- (id)fixedLabels;
- (id)getAttributesForClusterClassName:(id)arg1 endpoint:(id)arg2;
- (id)getBridgeAggregateNodeEndpoint;
- (id)getClustersInUseAtEndpoint:(id)arg1;
- (id)getEnabledOTARequestorEndpoint;
- (id)getEndpoints;
- (id)getFeatureMapForClusterClassName:(id)arg1 endpoint:(id)arg2;
- (id)getFixedLabelsAtEndpoint:(id)arg1;
- (id)getHAPCategoriesAtEndpoint:(id)arg1;
- (id)getHAPServiceTypesAtEndpoint:(id)arg1;
- (id)getNodeLabelAtEndpoint:(id)arg1;
- (id)getOTARequestorEndpoints;
- (id)getPartsListAtEndpoint:(id)arg1;
- (id)getVersionForKey:(id)arg1;
- (id)hapCategories;
- (id)hapDisabledCharacteristics;
- (id)hapServiceTypes;
- (id)init;
- (id)initWithNodeId:(id)arg1 server:(id)arg2;
- (id)initWithTopologyDictionary:(id)arg1;
- (bool)isHAPCharacteristicDisabledAtEndpoint:(id)arg1 hapServiceType:(id)arg2 hapCharacteristic:(id)arg3;
- (id)nodeLabels;
- (id)otaRequestorEndpoints;
- (id)partsList;
- (void)setClustersInUse:(id)arg1;
- (void)setDeviceAttributeValues:(id)arg1;
- (void)setDeviceFeatureMapValues:(id)arg1;
- (void)setFixedLabels:(id)arg1;
- (void)setHapCategories:(id)arg1;
- (void)setHapDisabledCharacteristics:(id)arg1;
- (void)setHapServiceTypes:(id)arg1;
- (void)setNodeLabels:(id)arg1;
- (void)setOtaRequestorEndpoints:(id)arg1;
- (void)setPartsList:(id)arg1;
- (void)setVersions:(id)arg1;
- (id)versions;

@end
