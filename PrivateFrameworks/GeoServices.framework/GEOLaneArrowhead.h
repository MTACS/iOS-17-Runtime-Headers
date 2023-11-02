
@interface GEOLaneArrowhead : PBCodable <NSCopying> {
    int  _angle;
    int  _category;
    struct { 
        unsigned int has_angle : 1; 
        unsigned int has_category : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int angle;
@property (nonatomic) int category;
@property (nonatomic) bool hasAngle;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCategory:(id)arg1;
- (int)angle;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAngle;
- (bool)hasCategory;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAngle:(int)arg1;
- (void)setCategory:(int)arg1;
- (void)setHasAngle:(bool)arg1;
- (void)setHasCategory:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
