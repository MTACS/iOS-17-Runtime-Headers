
@interface BMPBPOICategoryEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timeIntervalSince1970 : 1; 
        unsigned int rank : 1; 
    }  _has;
    NSString * _poiCategory;
    unsigned int  _rank;
    double  _timeIntervalSince1970;
}

@property (nonatomic, readonly) bool hasPoiCategory;
@property (nonatomic) bool hasRank;
@property (nonatomic) bool hasTimeIntervalSince1970;
@property (nonatomic, retain) NSString *poiCategory;
@property (nonatomic) unsigned int rank;
@property (nonatomic) double timeIntervalSince1970;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPoiCategory;
- (bool)hasRank;
- (bool)hasTimeIntervalSince1970;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)poiCategory;
- (unsigned int)rank;
- (bool)readFrom:(id)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setHasTimeIntervalSince1970:(bool)arg1;
- (void)setPoiCategory:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (double)timeIntervalSince1970;
- (void)writeTo:(id)arg1;

@end
