
@interface GEOURLExtraStorage : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_phoneNumber : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_url : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOMapRegion * _mapRegion;
    NSString * _phoneNumber;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapRegion;
- (bool)hasPhoneNumber;
- (bool)hasStyleAttributes;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)phoneNumber;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
