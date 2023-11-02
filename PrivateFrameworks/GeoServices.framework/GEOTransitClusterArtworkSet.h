
@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _artworkIndexs;
    NSMutableArray * _artworkItems;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_artworkIndexs : 1; 
        unsigned int read_artworkItems : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int*artworkIndexs;
@property (nonatomic, readonly) unsigned long long artworkIndexsCount;
@property (nonatomic, retain) NSMutableArray *artworkItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)artworkItemType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)_maps_artworkIndicesAsString;
- (void)addArtworkIndex:(unsigned int)arg1;
- (void)addArtworkItem:(id)arg1;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)artworkIndexs;
- (unsigned long long)artworkIndexsCount;
- (id)artworkItemAtIndex:(unsigned long long)arg1;
- (id)artworkItems;
- (unsigned long long)artworkItemsCount;
- (void)clearArtworkIndexs;
- (void)clearArtworkItems;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
- (void)setArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setArtworkItems:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
