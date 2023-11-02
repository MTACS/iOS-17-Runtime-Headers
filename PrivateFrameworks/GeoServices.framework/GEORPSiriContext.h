
@interface GEORPSiriContext : PBCodable <NSCopying> {
    NSString * _additionalDetails;
    struct { 
        unsigned int read_additionalDetails : 1; 
        unsigned int read_siriIncidentType : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _siriIncidentType;
}

@property (nonatomic, retain) NSString *additionalDetails;
@property (nonatomic, readonly) bool hasAdditionalDetails;
@property (nonatomic, readonly) bool hasSiriIncidentType;
@property (nonatomic, retain) NSString *siriIncidentType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)additionalDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdditionalDetails;
- (bool)hasSiriIncidentType;
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
- (void)setAdditionalDetails:(id)arg1;
- (void)setSiriIncidentType:(id)arg1;
- (id)siriIncidentType;
- (void)writeTo:(id)arg1;

@end
