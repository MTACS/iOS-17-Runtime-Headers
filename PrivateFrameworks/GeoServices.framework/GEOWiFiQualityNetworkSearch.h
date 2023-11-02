
@interface GEOWiFiQualityNetworkSearch : PBCodable <NSCopying> {
    NSMutableArray * _ess;
    struct { 
        unsigned int has_radius : 1; 
        unsigned int read_ess : 1; 
        unsigned int read_location : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocation * _location;
    unsigned long long  _radius;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *ess;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasRadius;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) unsigned long long radius;

+ (Class)essType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addEss:(id)arg1;
- (void)clearEss;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)ess;
- (id)essAtIndex:(unsigned long long)arg1;
- (unsigned long long)essCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasRadius;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)radius;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEss:(id)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setRadius:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
