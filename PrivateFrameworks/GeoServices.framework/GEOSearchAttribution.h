
@interface GEOSearchAttribution : PBCodable <NSCopying> {
    NSMutableArray * _attributionURLs;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_attributionURLs : 1; 
        unsigned int read_sourceIdentifier : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sourceIdentifier;
    unsigned int  _sourceVersion;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributionURLs;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributionURLsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttributionURLs:(id)arg1;
- (id)attributionURLs;
- (id)attributionURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionURLsCount;
- (void)clearAttributionURLs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
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
- (void)setAttributionURLs:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (id)sourceIdentifier;
- (unsigned int)sourceVersion;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
