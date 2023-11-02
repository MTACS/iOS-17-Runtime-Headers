
@interface GEORoadDescription : PBCodable <NSCopying> {
    struct { 
        unsigned int has_navigationFriendliness : 1; 
    }  _flags;
    GEOFormattedString * _formattedDescription;
    int  _navigationFriendliness;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *formattedDescription;
@property (nonatomic, readonly) bool hasFormattedDescription;
@property (nonatomic) bool hasNavigationFriendliness;
@property (nonatomic) int navigationFriendliness;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsNavigationFriendliness:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedDescription;
- (bool)hasFormattedDescription;
- (bool)hasNavigationFriendliness;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)navigationFriendliness;
- (id)navigationFriendlinessAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFormattedDescription:(id)arg1;
- (void)setHasNavigationFriendliness:(bool)arg1;
- (void)setNavigationFriendliness:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
