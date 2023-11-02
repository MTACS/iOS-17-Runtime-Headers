
@interface CLPLOGENTRYVISIONLSLMapRoadSegment : PBCodable <NSCopying> {
    struct { 
        unsigned int roadId : 1; 
    }  _has;
    NSMutableArray * _polylines;
    unsigned long long  _roadId;
}

@property (nonatomic) bool hasRoadId;
@property (nonatomic, retain) NSMutableArray *polylines;
@property (nonatomic) unsigned long long roadId;

+ (Class)polylinesType;

- (void).cxx_destruct;
- (void)addPolylines:(id)arg1;
- (void)clearPolylines;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoadId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)polylines;
- (id)polylinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)polylinesCount;
- (bool)readFrom:(id)arg1;
- (unsigned long long)roadId;
- (void)setHasRoadId:(bool)arg1;
- (void)setPolylines:(id)arg1;
- (void)setRoadId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
