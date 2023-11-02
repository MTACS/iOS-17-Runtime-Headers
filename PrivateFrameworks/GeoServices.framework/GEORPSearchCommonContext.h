
@interface GEORPSearchCommonContext : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_lastSearchString : 1; 
        unsigned int read_lastUserTypedSearchString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _lastSearchString;
    NSString * _lastUserTypedSearchString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLastSearchString;
@property (nonatomic, readonly) bool hasLastUserTypedSearchString;
@property (nonatomic, retain) NSString *lastSearchString;
@property (nonatomic, retain) NSString *lastUserTypedSearchString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastSearchString;
- (bool)hasLastUserTypedSearchString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lastSearchString;
- (id)lastUserTypedSearchString;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLastSearchString:(id)arg1;
- (void)setLastUserTypedSearchString:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
