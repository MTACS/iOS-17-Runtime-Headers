
@interface GEORPPhotoAttributionPreferencesUpdate : PBCodable <NSCopying> {
    GEORPPhotoAttributionPreferences * _preferences;
}

@property (nonatomic, readonly) bool hasPreferences;
@property (nonatomic, retain) GEORPPhotoAttributionPreferences *preferences;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreferences;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preferences;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
