
@interface HKCodableLocationCoordinate : PBCodable <NSCopying> {
    struct { 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
    }  _has;
    double  _latitude;
    double  _longitude;
}

@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)writeTo:(id)arg1;

@end
