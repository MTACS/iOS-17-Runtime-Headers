
@interface GEOPublisherAttributionManifestIndex : PBCodable <NSCopying> {
    struct { 
        unsigned int read_publisherAttributionFiles : 1; 
        unsigned int read_publisherToFileIndex : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _publisherAttributionFiles;
    NSMutableDictionary * _publisherToFileIndex;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *publisherAttributionFiles;
@property (nonatomic, retain) NSMutableDictionary *publisherToFileIndex;

+ (bool)isValid:(id)arg1;
+ (Class)publisherAttributionFilesType;
+ (Class)publisherToFileIndexType;

- (void).cxx_destruct;
- (void)addPublisherAttributionFiles:(id)arg1;
- (void)clearPublisherAttributionFiles;
- (void)clearPublisherToFileIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)enumeratePublisherToFileIndexUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)publisherAttributionFiles;
- (id)publisherAttributionFilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherAttributionFilesCount;
- (id)publisherToFileIndex;
- (unsigned long long)publisherToFileIndexCount;
- (unsigned int)publisherToFileIndexForKey:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPublisherAttributionFiles:(id)arg1;
- (void)setPublisherToFileIndex:(id)arg1;
- (void)setPublisherToFileIndexValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)writeTo:(id)arg1;

@end
