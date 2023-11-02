
@interface GEOLogMsgEventTimeToLeaveInitialTravelTime : PBCodable <NSCopying> {
    struct { 
        unsigned int has_travelTime : 1; 
    }  _flags;
    int  _travelTime;
}

@property (nonatomic) bool hasTravelTime;
@property (nonatomic) int travelTime;

+ (bool)isValid:(id)arg1;

- (int)StringAsTravelTime:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTravelTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTravelTime:(bool)arg1;
- (void)setTravelTime:(int)arg1;
- (int)travelTime;
- (id)travelTimeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
