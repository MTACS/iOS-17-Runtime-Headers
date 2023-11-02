
@interface GEOABConfigKeyValuePair : PBCodable <NSCopying> {
    NSString * _abConfigKey;
    GEOABConfigValue * _abConfigValue;
    int  _abConfigValueType;
    struct { 
        unsigned int has_abConfigValueType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_abConfigKey : 1; 
        unsigned int read_abConfigValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *abConfigKey;
@property (nonatomic, retain) GEOABConfigValue *abConfigValue;
@property (nonatomic) int abConfigValueType;
@property (nonatomic, readonly) bool hasAbConfigKey;
@property (nonatomic, readonly) bool hasAbConfigValue;
@property (nonatomic) bool hasAbConfigValueType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAbConfigValueType:(id)arg1;
- (id)abConfigKey;
- (id)abConfigValue;
- (int)abConfigValueType;
- (id)abConfigValueTypeAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbConfigKey;
- (bool)hasAbConfigValue;
- (bool)hasAbConfigValueType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbConfigKey:(id)arg1;
- (void)setAbConfigValue:(id)arg1;
- (void)setAbConfigValueType:(int)arg1;
- (void)setHasAbConfigValueType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
