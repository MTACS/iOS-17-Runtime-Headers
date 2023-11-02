
@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    struct { 
        unsigned int has_shieldEnumValue : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_shieldColor : 1; 
        unsigned int read_shieldText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _shieldColor;
    unsigned int  _shieldEnumValue;
    NSString * _shieldText;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasShieldColor;
@property (nonatomic) bool hasShieldEnumValue;
@property (nonatomic, readonly) bool hasShieldText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *shieldColor;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic) unsigned int shieldEnumValue;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, retain) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShieldColor;
- (bool)hasShieldEnumValue;
- (bool)hasShieldText;
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
- (void)setHasShieldEnumValue:(bool)arg1;
- (void)setShieldColor:(id)arg1;
- (void)setShieldEnumValue:(unsigned int)arg1;
- (void)setShieldText:(id)arg1;
- (id)shieldColor;
- (id)shieldColorString;
- (unsigned int)shieldEnumValue;
- (id)shieldText;
- (long long)shieldType;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
