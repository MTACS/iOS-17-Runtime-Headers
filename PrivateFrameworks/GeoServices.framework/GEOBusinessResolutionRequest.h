
@interface GEOBusinessResolutionRequest : PBRequest <NSCopying> {
    GEOLocation * _deviceLocation;
    struct { 
        unsigned int read_deviceLocation : 1; 
        unsigned int read_shortBusinessName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _shortBusinessName;
}

@property (nonatomic, retain) GEOLocation *deviceLocation;
@property (nonatomic, readonly) bool hasDeviceLocation;
@property (nonatomic, readonly) bool hasShortBusinessName;
@property (nonatomic, retain) NSString *shortBusinessName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceLocation;
- (id)dictionaryRepresentation;
- (bool)hasDeviceLocation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasShortBusinessName;
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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setDeviceLocation:(id)arg1;
- (void)setShortBusinessName:(id)arg1;
- (id)shortBusinessName;
- (void)writeTo:(id)arg1;

@end
