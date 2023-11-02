
@interface GEOCollectionPlace : PBCodable <NSCopying> {
    NSString * _address;
    GEOLatLng * _coordinate;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_providerId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_address : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _muid;
    NSString * _name;
    int  _providerId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasProviderId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int providerId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (void)clearUnknownFields:(bool)arg1;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMuid;
- (bool)hasName;
- (bool)hasProviderId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (int)providerId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasProviderId:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
