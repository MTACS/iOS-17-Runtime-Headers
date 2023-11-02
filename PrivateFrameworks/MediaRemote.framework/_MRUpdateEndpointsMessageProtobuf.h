
@interface _MRUpdateEndpointsMessageProtobuf : PBCodable <NSCopying> {
    int  _endpointFeatures;
    NSMutableArray * _endpoints;
    struct { 
        unsigned int endpointFeatures : 1; 
    }  _has;
}

@property (nonatomic) int endpointFeatures;
@property (nonatomic, retain) NSMutableArray *endpoints;
@property (nonatomic) bool hasEndpointFeatures;

+ (Class)endpointsType;

- (void).cxx_destruct;
- (int)StringAsEndpointFeatures:(id)arg1;
- (void)addEndpoints:(id)arg1;
- (void)clearEndpoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endpointFeatures;
- (id)endpointFeaturesAsString:(int)arg1;
- (id)endpoints;
- (id)endpointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)endpointsCount;
- (bool)hasEndpointFeatures;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndpointFeatures:(int)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setHasEndpointFeatures:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
