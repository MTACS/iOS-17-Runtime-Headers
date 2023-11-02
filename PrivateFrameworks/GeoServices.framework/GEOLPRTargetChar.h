
@interface GEOLPRTargetChar : PBCodable <NSCopying> {
    int  _charIndex;
    struct { 
        unsigned int has_charIndex : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    int  _type;
}

@property (nonatomic) int charIndex;
@property (nonatomic) bool hasCharIndex;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (int)StringAsType:(id)arg1;
- (int)charIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCharIndex;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCharIndex:(int)arg1;
- (void)setHasCharIndex:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
