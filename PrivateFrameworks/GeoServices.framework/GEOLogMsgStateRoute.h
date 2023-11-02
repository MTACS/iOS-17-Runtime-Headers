
@interface GEOLogMsgStateRoute : PBCodable <NSCopying> {
    GEORouteDetails * _routeDetails;
}

@property (nonatomic, readonly) bool hasRouteDetails;
@property (nonatomic, retain) GEORouteDetails *routeDetails;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRouteDetails;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeDetails;
- (void)setRouteDetails:(id)arg1;
- (void)writeTo:(id)arg1;

@end
