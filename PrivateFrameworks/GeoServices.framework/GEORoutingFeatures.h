
@interface GEORoutingFeatures : PBCodable <NSCopying> {
    NSMutableArray * _routingFeaturesInfos;
}

@property (nonatomic, retain) NSMutableArray *routingFeaturesInfos;

+ (bool)isValid:(id)arg1;
+ (Class)routingFeaturesInfoType;

- (void).cxx_destruct;
- (void)addRoutingFeaturesInfo:(id)arg1;
- (void)clearRoutingFeaturesInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingFeaturesInfoAtIndex:(unsigned long long)arg1;
- (id)routingFeaturesInfos;
- (unsigned long long)routingFeaturesInfosCount;
- (void)setRoutingFeaturesInfos:(id)arg1;
- (void)writeTo:(id)arg1;

@end
