
@interface ATXPBPredictionLocationOfInterest : PBCodable <NSCopying> {
    struct { 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int type : 1; 
    }  _has;
    double  _latitude;
    double  _longitude;
    int  _type;
    NSString * _uuid;
}

@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasType;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setType:(int)arg1;
- (void)setUuid:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
