
@interface GEOMatchedToken : PBCodable <NSCopying> {
    struct { 
        unsigned int has_geoType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_geoIds : 1; 
        unsigned int read_matchedToken : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoIds;
    int  _geoType;
    NSString * _matchedToken;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned long long*geoIds;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic) int geoType;
@property (nonatomic) bool hasGeoType;
@property (nonatomic, retain) NSString *matchedToken;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addGeoId:(unsigned long long)arg1;
- (void)clearGeoIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)geoIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)geoIds;
- (unsigned long long)geoIdsCount;
- (int)geoType;
- (bool)hasGeoType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)matchedToken;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setGeoType:(int)arg1;
- (void)setHasGeoType:(bool)arg1;
- (void)setMatchedToken:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
