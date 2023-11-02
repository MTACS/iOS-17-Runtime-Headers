
@interface GEORPUserFormDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int has_userFormStyle : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
    int  _userFormStyle;
}

@property (nonatomic) bool hasUserFormStyle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int userFormStyle;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsUserFormStyle:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserFormStyle;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasUserFormStyle:(bool)arg1;
- (void)setUserFormStyle:(int)arg1;
- (id)unknownFields;
- (int)userFormStyle;
- (id)userFormStyleAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
