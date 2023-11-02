
@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {
    NSMutableArray * _actionComponentMapEntries;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int read_actionComponentMapEntries : 1; 
        unsigned int read_searchAttributionSources : 1; 
        unsigned int read_sourceURL : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _searchAttributionSources;
    NSString * _sourceURL;
    double  _timestamp;
}

@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceURL;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
