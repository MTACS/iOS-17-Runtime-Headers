
@interface PeoplePredictionDataMLSEVirtualFeatureStore : PBCodable <NSCopying> {
    NSString * _deviceIdentifier;
    NSMutableArray * _featureVectors;
    unsigned int  _featureVersion;
    struct { 
        unsigned int featureVersion : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSMutableArray *featureVectors;
@property (nonatomic) unsigned int featureVersion;
@property (nonatomic, readonly) bool hasDeviceIdentifier;
@property (nonatomic) bool hasFeatureVersion;

+ (Class)featureVectorType;

- (void).cxx_destruct;
- (void)addFeatureVector:(id)arg1;
- (void)clearFeatureVectors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (id)dictionaryRepresentation;
- (id)featureVectorAtIndex:(unsigned long long)arg1;
- (id)featureVectors;
- (unsigned long long)featureVectorsCount;
- (unsigned int)featureVersion;
- (bool)hasDeviceIdentifier;
- (bool)hasFeatureVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setFeatureVectors:(id)arg1;
- (void)setFeatureVersion:(unsigned int)arg1;
- (void)setHasFeatureVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
