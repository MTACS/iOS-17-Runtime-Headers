
@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying> {
    float  _featureValueThresholdHigh;
    float  _featureValueThresholdLow;
    float  _featureWeightHigh;
    float  _featureWeightLow;
    struct { 
        unsigned int has_featureValueThresholdHigh : 1; 
        unsigned int has_featureValueThresholdLow : 1; 
        unsigned int has_featureWeightHigh : 1; 
        unsigned int has_featureWeightLow : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
