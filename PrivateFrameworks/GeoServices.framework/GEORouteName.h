
@interface GEORouteName : PBCodable <NSCopying> {
    struct { 
        unsigned int has_lastZilchStitchedIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_nameInfo : 1; 
        unsigned int read_nameRanges : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _lastZilchStitchedIndex;
    GEONameInfo * _nameInfo;
    NSMutableArray * _nameRanges;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasLastZilchStitchedIndex;
@property (nonatomic, readonly) bool hasNameInfo;
@property (nonatomic) int lastZilchStitchedIndex;
@property (nonatomic, retain) GEONameInfo *nameInfo;
@property (nonatomic, retain) NSMutableArray *nameRanges;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)nameRangeType;

- (void).cxx_destruct;
- (void)addNameRange:(id)arg1;
- (void)clearNameRanges;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastZilchStitchedIndex;
- (bool)hasNameInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)lastZilchStitchedIndex;
- (void)mergeFrom:(id)arg1;
- (id)nameInfo;
- (id)nameRangeAtIndex:(unsigned long long)arg1;
- (id)nameRanges;
- (unsigned long long)nameRangesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLastZilchStitchedIndex:(bool)arg1;
- (void)setLastZilchStitchedIndex:(int)arg1;
- (void)setNameInfo:(id)arg1;
- (void)setNameRanges:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
