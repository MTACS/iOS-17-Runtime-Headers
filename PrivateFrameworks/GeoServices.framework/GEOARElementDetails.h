
@interface GEOARElementDetails : PBCodable <NSCopying> {
    int  _arElementShown;
    bool  _didSafetyUiTraggier;
    bool  _didUserSeeArLabel;
    struct { 
        unsigned int has_arElementShown : 1; 
        unsigned int has_didSafetyUiTraggier : 1; 
        unsigned int has_didUserSeeArLabel : 1; 
    }  _flags;
}

@property (nonatomic) int arElementShown;
@property (nonatomic) bool didSafetyUiTraggier;
@property (nonatomic) bool didUserSeeArLabel;
@property (nonatomic) bool hasArElementShown;
@property (nonatomic) bool hasDidSafetyUiTraggier;
@property (nonatomic) bool hasDidUserSeeArLabel;

+ (bool)isValid:(id)arg1;

- (int)StringAsArElementShown:(id)arg1;
- (int)arElementShown;
- (id)arElementShownAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didSafetyUiTraggier;
- (bool)didUserSeeArLabel;
- (bool)hasArElementShown;
- (bool)hasDidSafetyUiTraggier;
- (bool)hasDidUserSeeArLabel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArElementShown:(int)arg1;
- (void)setDidSafetyUiTraggier:(bool)arg1;
- (void)setDidUserSeeArLabel:(bool)arg1;
- (void)setHasArElementShown:(bool)arg1;
- (void)setHasDidSafetyUiTraggier:(bool)arg1;
- (void)setHasDidUserSeeArLabel:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
