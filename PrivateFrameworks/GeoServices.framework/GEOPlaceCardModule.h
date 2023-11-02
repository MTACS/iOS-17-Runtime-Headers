
@interface GEOPlaceCardModule : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _contents;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_contents : 1; 
        unsigned int read_metadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _metadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
}

@property (nonatomic, readonly) int*contents;
@property (nonatomic, readonly) unsigned long long contentsCount;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsContents:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addContent:(int)arg1;
- (void)clearContents;
- (int)contentAtIndex:(unsigned long long)arg1;
- (int*)contents;
- (id)contentsAsString:(int)arg1;
- (unsigned long long)contentsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetadata;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContents:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasType:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
