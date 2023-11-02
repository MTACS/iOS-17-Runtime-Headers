
@interface GEORPSourceInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_sourceApplication : 1; 
        unsigned int read_sourceUrl : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sourceApplication;
    NSString * _sourceUrl;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSourceApplication;
@property (nonatomic, readonly) bool hasSourceUrl;
@property (nonatomic, retain) NSString *sourceApplication;
@property (nonatomic, retain) NSString *sourceUrl;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceApplication;
- (bool)hasSourceUrl;
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
- (void)setSourceApplication:(id)arg1;
- (void)setSourceUrl:(id)arg1;
- (id)sourceApplication;
- (id)sourceUrl;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
