
@interface GEONameInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_phoneticType : 1; 
        unsigned int has_shieldType : 1; 
        unsigned int has_signType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_locale : 1; 
        unsigned int read_name : 1; 
        unsigned int read_phoneticName : 1; 
        unsigned int read_shield : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _locale;
    NSString * _name;
    NSString * _phoneticName;
    int  _phoneticType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _shield;
    int  _shieldType;
    int  _signType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPhoneticName;
@property (nonatomic) bool hasPhoneticType;
@property (nonatomic, readonly) bool hasShield;
@property (nonatomic) bool hasShieldType;
@property (nonatomic) bool hasSignType;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *phoneticName;
@property (nonatomic) int phoneticType;
@property (nonatomic, retain) NSString *shield;
@property (nonatomic) int shieldType;
@property (nonatomic) int signType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPhoneticType:(id)arg1;
- (int)StringAsSignType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasName;
- (bool)hasPhoneticName;
- (bool)hasPhoneticType;
- (bool)hasShield;
- (bool)hasShieldType;
- (bool)hasSignType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)phoneticName;
- (int)phoneticType;
- (id)phoneticTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPhoneticType:(bool)arg1;
- (void)setHasShieldType:(bool)arg1;
- (void)setHasSignType:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setPhoneticType:(int)arg1;
- (void)setShield:(id)arg1;
- (void)setShieldType:(int)arg1;
- (void)setSignType:(int)arg1;
- (id)shield;
- (int)shieldType;
- (int)signType;
- (id)signTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
