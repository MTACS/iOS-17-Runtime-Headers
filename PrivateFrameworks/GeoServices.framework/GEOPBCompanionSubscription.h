
@interface GEOPBCompanionSubscription : PBCodable <NSCopying> {
    unsigned long long  _dataType;
    struct { 
        unsigned int has_dataType : 1; 
        unsigned int has_policy : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_region : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    unsigned int  _policy;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOMapRegion * _region;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long dataType;
@property (nonatomic) bool hasDataType;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasPolicy;
@property (nonatomic, readonly) bool hasRegion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned int policy;
@property (nonatomic, retain) GEOMapRegion *region;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataType;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasPolicy;
- (bool)hasRegion;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)policy;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)region;
- (void)setDataType:(unsigned long long)arg1;
- (void)setHasDataType:(bool)arg1;
- (void)setHasPolicy:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPolicy:(unsigned int)arg1;
- (void)setRegion:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
