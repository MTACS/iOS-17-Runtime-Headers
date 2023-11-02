
@interface BMMLSELabeledDataStore : BMEventBase <BMStoreData> {
    NSString * _configurationInfo;
    NSString * _deviceIdentifier;
    NSArray * _featureVector;
    unsigned int  _featureVersion;
    bool  _hasFeatureVersion;
    bool  _hasIsPositiveLabeled;
    bool  _hasLabelingPolicyVersion;
    bool  _isPositiveLabeled;
    NSString * _itemIdentifier;
    int  _labelingEvidence;
    unsigned int  _labelingPolicyVersion;
    NSString * _sharingEventUID;
}

@property (nonatomic, readonly) NSString *configurationInfo;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSArray *featureVector;
@property (nonatomic, readonly) unsigned int featureVersion;
@property (nonatomic) bool hasFeatureVersion;
@property (nonatomic) bool hasIsPositiveLabeled;
@property (nonatomic) bool hasLabelingPolicyVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPositiveLabeled;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) int labelingEvidence;
@property (nonatomic, readonly) unsigned int labelingPolicyVersion;
@property (nonatomic, readonly) NSString *sharingEventUID;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_featureVectorJSONArray;
- (id)configurationInfo;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceIdentifier;
- (id)featureVector;
- (unsigned int)featureVersion;
- (bool)hasFeatureVersion;
- (bool)hasIsPositiveLabeled;
- (bool)hasLabelingPolicyVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 featureVersion:(id)arg2 featureVector:(id)arg3 deviceIdentifier:(id)arg4 isPositiveLabeled:(id)arg5 labelingPolicyVersion:(id)arg6 labelingEvidence:(int)arg7 sharingEventUID:(id)arg8 configurationInfo:(id)arg9;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPositiveLabeled;
- (id)itemIdentifier;
- (id)jsonDictionary;
- (int)labelingEvidence;
- (unsigned int)labelingPolicyVersion;
- (id)serialize;
- (void)setHasFeatureVersion:(bool)arg1;
- (void)setHasIsPositiveLabeled:(bool)arg1;
- (void)setHasLabelingPolicyVersion:(bool)arg1;
- (id)sharingEventUID;
- (void)writeTo:(id)arg1;

@end
