
@interface GEOGenericStringData : PBCodable <NSCopying> {
    struct { 
        unsigned int has_privacyFilterType : 1; 
        unsigned int has_stringSubstituteType : 1; 
    }  _flags;
    int  _privacyFilterType;
    int  _stringSubstituteType;
    NSString * _tokenSubstitute;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasPrivacyFilterType;
@property (nonatomic) bool hasStringSubstituteType;
@property (nonatomic, readonly) bool hasTokenSubstitute;
@property (nonatomic) int privacyFilterType;
@property (nonatomic) int stringSubstituteType;
@property (nonatomic, retain) NSString *tokenSubstitute;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPrivacyFilterType:(id)arg1;
- (int)StringAsStringSubstituteType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrivacyFilterType;
- (bool)hasStringSubstituteType;
- (bool)hasTokenSubstitute;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)privacyFilterType;
- (id)privacyFilterTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPrivacyFilterType:(bool)arg1;
- (void)setHasStringSubstituteType:(bool)arg1;
- (void)setPrivacyFilterType:(int)arg1;
- (void)setStringSubstituteType:(int)arg1;
- (void)setTokenSubstitute:(id)arg1;
- (int)stringSubstituteType;
- (id)stringSubstituteTypeAsString:(int)arg1;
- (id)tokenSubstitute;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
