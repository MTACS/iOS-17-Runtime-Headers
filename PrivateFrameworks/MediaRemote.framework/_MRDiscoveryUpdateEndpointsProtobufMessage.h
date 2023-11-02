
@interface _MRDiscoveryUpdateEndpointsProtobufMessage : PBCodable <NSCopying> {
    _MRDiscoverySessionConfigurationProtobuf * _configuration;
    NSMutableArray * _endpoints;
}

@property (nonatomic, retain) _MRDiscoverySessionConfigurationProtobuf *configuration;
@property (nonatomic, retain) NSMutableArray *endpoints;
@property (nonatomic, readonly) bool hasConfiguration;

+ (Class)endpointsType;

- (void).cxx_destruct;
- (void)addEndpoints:(id)arg1;
- (void)clearEndpoints;
- (id)configuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpoints;
- (id)endpointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)endpointsCount;
- (bool)hasConfiguration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEndpoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end
