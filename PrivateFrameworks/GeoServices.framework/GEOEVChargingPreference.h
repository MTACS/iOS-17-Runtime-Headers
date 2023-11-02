
@interface GEOEVChargingPreference : PBCodable <NSCopying> {
    struct { 
        unsigned int has_preferenceType : 1; 
    }  _flags;
    GEOPreferenceEntity * _preferenceEntity;
    int  _preferenceType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPreferenceEntity;
@property (nonatomic) bool hasPreferenceType;
@property (nonatomic, retain) GEOPreferenceEntity *preferenceEntity;
@property (nonatomic) int preferenceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPreferenceType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreferenceEntity;
- (bool)hasPreferenceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preferenceEntity;
- (int)preferenceType;
- (id)preferenceTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPreferenceType:(bool)arg1;
- (void)setPreferenceEntity:(id)arg1;
- (void)setPreferenceType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
