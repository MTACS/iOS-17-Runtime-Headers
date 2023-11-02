
@interface GEORegionalResourceTile : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    NSMutableArray * _childrens;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_attributions : 1; 
        unsigned int read_childrens : 1; 
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
    PBUnknownFields * _unknownFields;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _z;
}

@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSMutableArray *childrens;
@property (nonatomic, retain) NSMutableArray *iconChecksums;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;

+ (Class)attributionType;
+ (Class)childrenType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribution:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)childrenAtIndex:(unsigned long long)arg1;
- (id)childrens;
- (unsigned long long)childrensCount;
- (void)clearAttributions;
- (void)clearChildrens;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearUnknownFields:(bool)arg1;
- (bool)containsTileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
- (void)setChildrens:(id)arg1;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setX:(unsigned int)arg1;
- (void)setY:(unsigned int)arg1;
- (void)setZ:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)x;
- (unsigned int)y;
- (unsigned int)z;

@end
