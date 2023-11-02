
@interface GEORPThirdPartyPhotoSharingPreference : PBCodable <NSCopying> {
    struct { 
        unsigned int has_optIn : 1; 
    }  _flags;
    bool  _optIn;
    NSString * _version;
}

@property (nonatomic) bool hasOptIn;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic) bool optIn;
@property (nonatomic, retain) NSString *version;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOptIn;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)optIn;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOptIn:(bool)arg1;
- (void)setOptIn:(bool)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
