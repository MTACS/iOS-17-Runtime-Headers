
@interface CLPLOGENTRYVISIONLSLHeadingSupplInfo : PBCodable <NSCopying> {
    CLPLOGENTRYVISIONLSLMapRoadSegment * _roadSegment;
}

@property (nonatomic, readonly) bool hasRoadSegment;
@property (nonatomic, retain) CLPLOGENTRYVISIONLSLMapRoadSegment *roadSegment;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoadSegment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadSegment;
- (void)setRoadSegment:(id)arg1;
- (void)writeTo:(id)arg1;

@end
