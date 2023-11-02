
@interface GEODodgeballDetails : PBCodable <NSCopying> {
    int  _dodgeballAction;
    struct { 
        unsigned int has_dodgeballAction : 1; 
    }  _flags;
}

@property (nonatomic) int dodgeballAction;
@property (nonatomic) bool hasDodgeballAction;

+ (bool)isValid:(id)arg1;

- (int)StringAsDodgeballAction:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)dodgeballAction;
- (id)dodgeballActionAsString:(int)arg1;
- (bool)hasDodgeballAction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDodgeballAction:(int)arg1;
- (void)setHasDodgeballAction:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
