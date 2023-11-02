
@interface GEORPVisibleTileSet : PBCodable <NSCopying> {
    struct { 
        unsigned int has_identifier : 1; 
        unsigned int has_style : 1; 
    }  _flags;
    unsigned int  _identifier;
    int  _style;
    struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _tileKeys;
    unsigned long long  _tileKeysCount;
    unsigned long long  _tileKeysSpace;
}

@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasStyle;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int style;
@property (nonatomic, readonly) struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*tileKeys;
@property (nonatomic, readonly) unsigned long long tileKeysCount;

+ (bool)isValid:(id)arg1;

- (int)StringAsStyle:(id)arg1;
- (void)addTileKey:(struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)clearTileKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasStyle;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasStyle:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setStyle:(int)arg1;
- (void)setTileKeys:(struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (int)style;
- (id)styleAsString:(int)arg1;
- (struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })tileKeyAtIndex:(unsigned long long)arg1;
- (struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)tileKeys;
- (unsigned long long)tileKeysCount;
- (void)writeTo:(id)arg1;

@end
