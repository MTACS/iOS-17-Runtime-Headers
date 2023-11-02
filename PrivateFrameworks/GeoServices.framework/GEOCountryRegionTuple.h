
@interface GEOCountryRegionTuple : PBCodable <NSCopying> {
    NSString * _countryCode;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_countryCode : 1; 
        unsigned int read_region : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _region;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasRegion;
@property (nonatomic, retain) NSString *region;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasRegion;
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
- (id)region;
- (void)setCountryCode:(id)arg1;
- (void)setRegion:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
