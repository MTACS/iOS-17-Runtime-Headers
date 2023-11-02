
@interface GEOTransitIncidentItem : PBCodable <NSCopying> {
    struct { 
        unsigned int read_transitIncidentTitle : 1; 
        unsigned int read_transitLineMuid : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _transitIncidentTitle;
    NSString * _transitLineMuid;
}

@property (nonatomic, readonly) bool hasTransitIncidentTitle;
@property (nonatomic, readonly) bool hasTransitLineMuid;
@property (nonatomic, retain) NSString *transitIncidentTitle;
@property (nonatomic, retain) NSString *transitLineMuid;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransitIncidentTitle;
- (bool)hasTransitLineMuid;
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
- (void)setTransitIncidentTitle:(id)arg1;
- (void)setTransitLineMuid:(id)arg1;
- (id)transitIncidentTitle;
- (id)transitLineMuid;
- (void)writeTo:(id)arg1;

@end