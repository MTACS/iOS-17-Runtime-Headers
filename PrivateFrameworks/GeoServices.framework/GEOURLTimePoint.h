
@interface GEOURLTimePoint : PBCodable <NSCopying> {
    struct { 
        unsigned int has_time : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    double  _time;
    int  _type;
}

@property (nonatomic) bool hasTime;
@property (nonatomic) bool hasType;
@property (nonatomic) double time;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTime;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTime:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTime:(double)arg1;
- (void)setType:(int)arg1;
- (double)time;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
