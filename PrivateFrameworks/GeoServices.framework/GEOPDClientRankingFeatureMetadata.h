
@interface GEOPDClientRankingFeatureMetadata : PBCodable <NSCopying> {
    int  _featureType;
    GEOPDClientRankingFeatureTypeComposite * _featureTypeComposite;
    GEOPDClientRankingFeatureTypeResult * _featureTypeResult;
    GEOPDClientRankingFeatureTypeSource * _featureTypeSource;
    struct { 
        unsigned int has_featureType : 1; 
        unsigned int has_functionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_featureTypeComposite : 1; 
        unsigned int read_featureTypeResult : 1; 
        unsigned int read_featureTypeSource : 1; 
        unsigned int read_functionTypeDiscrete : 1; 
        unsigned int read_functionTypeLinear : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _functionType;
    GEOPDClientRankingFeatureFunctionTypeDiscrete * _functionTypeDiscrete;
    GEOPDClientRankingFeatureFunctionTypeLinear * _functionTypeLinear;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
