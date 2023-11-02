
@interface GEOLocalizedName : PBCodable <NSCopying> {
    struct { 
        unsigned int has_nameRank : 1; 
        unsigned int has_isDefault : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_languageCode : 1; 
        unsigned int read_nameType : 1; 
        unsigned int read_name : 1; 
        unsigned int read_phoneticName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isDefault;
    NSString * _languageCode;
    NSString * _name;
    unsigned int  _nameRank;
    NSString * _nameType;
    NSString * _phoneticName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsDefault;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasNameRank;
@property (nonatomic, readonly) bool hasNameType;
@property (nonatomic, readonly) bool hasPhoneticName;
@property (nonatomic) bool isDefault;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int nameRank;
@property (nonatomic, retain) NSString *nameType;
@property (nonatomic, retain) NSString *phoneticName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsDefault;
- (bool)hasLanguageCode;
- (bool)hasName;
- (bool)hasNameRank;
- (bool)hasNameType;
- (bool)hasPhoneticName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithPlaceDataLocalizedString:(id)arg1;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)nameRank;
- (id)nameType;
- (id)phoneticName;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDefault:(bool)arg1;
- (void)setHasNameRank:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameRank:(unsigned int)arg1;
- (void)setNameType:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
