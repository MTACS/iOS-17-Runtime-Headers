
@interface GEOCoverageExtent : PBCodable <NSCopying> {
    struct GEOCoverageException { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; } * _coverageExceptions;
    unsigned long long  _coverageExceptionsCount;
    unsigned long long  _coverageExceptionsSpace;
    struct { 
        unsigned int has_maxX : 1; 
        unsigned int has_maxY : 1; 
        unsigned int has_minX : 1; 
        unsigned int has_minY : 1; 
        unsigned int has_zoom : 1; 
    }  _flags;
    unsigned int  _maxX;
    unsigned int  _maxY;
    unsigned int  _minX;
    unsigned int  _minY;
    PBUnknownFields * _unknownFields;
    unsigned int  _zoom;
}

@property (nonatomic, readonly) struct GEOCoverageException { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*coverageExceptions;
@property (nonatomic, readonly) unsigned long long coverageExceptionsCount;
@property (nonatomic) bool hasMaxX;
@property (nonatomic) bool hasMaxY;
@property (nonatomic) bool hasMinX;
@property (nonatomic) bool hasMinY;
@property (nonatomic) bool hasZoom;
@property (nonatomic) unsigned int maxX;
@property (nonatomic) unsigned int maxY;
@property (nonatomic) unsigned int minX;
@property (nonatomic) unsigned int minY;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zoom;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCoverageException:(struct GEOCoverageException { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })arg1;
- (void)clearCoverageExceptions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct GEOCoverageException { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })coverageExceptionAtIndex:(unsigned long long)arg1;
- (struct GEOCoverageException { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)coverageExceptions;
- (unsigned long long)coverageExceptionsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxX;
- (bool)hasMaxY;
- (bool)hasMinX;
- (bool)hasMinY;
- (bool)hasZoom;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)maxX;
- (unsigned int)maxY;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minX;
- (unsigned int)minY;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoverageExceptions:(struct GEOCoverageException { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setHasMaxX:(bool)arg1;
- (void)setHasMaxY:(bool)arg1;
- (void)setHasMinX:(bool)arg1;
- (void)setHasMinY:(bool)arg1;
- (void)setHasZoom:(bool)arg1;
- (void)setMaxX:(unsigned int)arg1;
- (void)setMaxY:(unsigned int)arg1;
- (void)setMinX:(unsigned int)arg1;
- (void)setMinY:(unsigned int)arg1;
- (void)setZoom:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)zoom;

@end
