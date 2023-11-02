
@interface GEOTrafficSignal : PBCodable <NSCopying> {
    unsigned int  _countryCodeStyleId;
    struct { 
        unsigned int has_countryCodeStyleId : 1; 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_position : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    GEOLatLng * _position;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int countryCodeStyleId;
@property (nonatomic) bool hasCountryCodeStyleId;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOLatLng *position;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countryCodeStyleId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCodeStyleId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasPosition;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)position;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountryCodeStyleId:(unsigned int)arg1;
- (void)setHasCountryCodeStyleId:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
