
@interface GEOPDClientRankingFeatureFunctionTypeLinear : PBCodable <NSCopying> {
    float  _featureMaxRelativeValue;
    float  _featureMeanValue;
    float  _featureWeight;
    struct { 
        unsigned int has_featureMaxRelativeValue : 1; 
        unsigned int has_featureMeanValue : 1; 
        unsigned int has_featureWeight : 1; 
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
