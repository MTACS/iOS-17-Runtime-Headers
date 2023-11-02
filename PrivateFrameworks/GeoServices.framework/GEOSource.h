
@interface GEOSource : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_sourceId : 1; 
        unsigned int read_sourceName : 1; 
        unsigned int read_sourceVersion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sourceId;
    NSString * _sourceName;
    NSString * _sourceVersion;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSourceVersion;
@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic, retain) NSString *sourceVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceVersion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributionID:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (id)sourceId;
- (id)sourceName;
- (id)sourceVersion;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
