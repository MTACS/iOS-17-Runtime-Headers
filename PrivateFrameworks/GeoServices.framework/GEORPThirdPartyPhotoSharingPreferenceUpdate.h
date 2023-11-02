
@interface GEORPThirdPartyPhotoSharingPreferenceUpdate : PBCodable <NSCopying> {
    GEORPThirdPartyPhotoSharingPreference * _preference;
}

@property (nonatomic, readonly) bool hasPreference;
@property (nonatomic, retain) GEORPThirdPartyPhotoSharingPreference *preference;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreference;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preference;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPreference:(id)arg1;
- (void)writeTo:(id)arg1;

@end
