
@interface GEOVLDataTile : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _buildIndexs;
    GEOTileCoordinate * _coord;
    struct { 
        unsigned int read_buildIndexs : 1; 
        unsigned int read_precisionIndexs : 1; 
        unsigned int read_purposeDenylists : 1; 
        unsigned int read_coord : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _precisionIndexs;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _purposeDenylists;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) unsigned int*buildIndexs;
@property (nonatomic, readonly) unsigned long long buildIndexsCount;
@property (nonatomic, retain) GEOTileCoordinate *coord;
@property (nonatomic, readonly) bool hasCoord;
@property (nonatomic, readonly) unsigned int*precisionIndexs;
@property (nonatomic, readonly) unsigned long long precisionIndexsCount;
@property (nonatomic, readonly) int*purposeDenylists;
@property (nonatomic, readonly) unsigned long long purposeDenylistsCount;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPurposeDenylists:(id)arg1;
- (void)addBuildIndex:(unsigned int)arg1;
- (void)addPrecisionIndex:(unsigned int)arg1;
- (void)addPurposeDenylist:(int)arg1;
- (unsigned int)buildIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)buildIndexs;
- (unsigned long long)buildIndexsCount;
- (void)clearBuildIndexs;
- (void)clearPrecisionIndexs;
- (void)clearPurposeDenylists;
- (id)coord;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoord;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)precisionIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)precisionIndexs;
- (unsigned long long)precisionIndexsCount;
- (int)purposeDenylistAtIndex:(unsigned long long)arg1;
- (int*)purposeDenylists;
- (id)purposeDenylistsAsString:(int)arg1;
- (unsigned long long)purposeDenylistsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setCoord:(id)arg1;
- (void)setPrecisionIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPurposeDenylists:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
