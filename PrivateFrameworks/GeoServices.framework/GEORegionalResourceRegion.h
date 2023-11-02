
@interface GEORegionalResourceRegion : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_tileRanges : 1; 
        unsigned int read_attributions : 1; 
        unsigned int read_iconChecksums : 1; 
        unsigned int read_icons : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _tileRanges;
    unsigned long long  _tileRangesCount;
    unsigned long long  _tileRangesSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSMutableArray *iconChecksums;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*tileRanges;
@property (nonatomic, readonly) unsigned long long tileRangesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributionType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribution:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addTileRange:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearTileRanges;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (id)iconChecksums;
- (unsigned long long)iconChecksumsCount;
- (id)icons;
- (unsigned long long)iconsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setTileRanges:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })tileRangeAtIndex:(unsigned long long)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)tileRanges;
- (unsigned long long)tileRangesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
