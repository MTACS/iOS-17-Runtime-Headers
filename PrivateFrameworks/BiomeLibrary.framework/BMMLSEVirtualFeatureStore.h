
@interface BMMLSEVirtualFeatureStore : BMEventBase <BMStoreData> {
    NSString * _deviceIdentifier;
    NSArray * _featureVector;
    unsigned int  _featureVersion;
    bool  _hasFeatureVersion;
    NSString * _itemIdentifier;
    NSString * _shareSessionIdentifier;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSArray *featureVector;
@property (nonatomic, readonly) unsigned int featureVersion;
@property (nonatomic) bool hasFeatureVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *shareSessionIdentifier;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_featureVectorJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceIdentifier;
- (id)featureVector;
- (unsigned int)featureVersion;
- (bool)hasFeatureVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 featureVersion:(id)arg2 featureVector:(id)arg3;
- (id)initWithItemIdentifier:(id)arg1 featureVersion:(id)arg2 featureVector:(id)arg3 deviceIdentifier:(id)arg4;
- (id)initWithItemIdentifier:(id)arg1 featureVersion:(id)arg2 featureVector:(id)arg3 deviceIdentifier:(id)arg4 shareSessionIdentifier:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasFeatureVersion:(bool)arg1;
- (id)shareSessionIdentifier;
- (void)writeTo:(id)arg1;

@end
