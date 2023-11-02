
@interface GEORPAuxiliaryControl : PBCodable <NSCopying> {
    GEORPCarPlayAuxiliaryControl * _car;
    struct { 
        unsigned int read_car : 1; 
        unsigned int read_watch : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPWatchAuxiliaryControl * _watch;
}

@property (nonatomic, retain) GEORPCarPlayAuxiliaryControl *car;
@property (nonatomic, readonly) bool hasCar;
@property (nonatomic, readonly) bool hasWatch;
@property (nonatomic, retain) GEORPWatchAuxiliaryControl *watch;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)car;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCar;
- (bool)hasWatch;
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
- (void)setCar:(id)arg1;
- (void)setWatch:(id)arg1;
- (id)watch;
- (void)writeTo:(id)arg1;

@end
