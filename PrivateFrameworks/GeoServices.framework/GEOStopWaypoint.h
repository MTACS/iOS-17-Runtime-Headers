
@interface GEOStopWaypoint : PBCodable <NSCopying> {
    struct { 
        unsigned int has_muid : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_name : 1; 
        unsigned int read_position : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _muid;
    NSString * _name;
    GEOLatLng * _position;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOLatLng *position;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMuid;
- (bool)hasName;
- (bool)hasPosition;
- (bool)hasStyleAttributes;
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
- (id)position;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
