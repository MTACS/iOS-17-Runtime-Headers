
@interface GEOPDPlaceSummaryLayoutTemplateEntry : PBCodable <NSCopying> {
    struct { 
        unsigned int has_platformType : 1; 
        unsigned int has_trailingEntityType : 1; 
        unsigned int read_trailingEntityTypeOrders : 1; 
        unsigned int read_lines : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _lines;
    int  _platformType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _trailingEntityType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trailingEntityTypeOrders;
}

@property (nonatomic) bool hasPlatformType;
@property (nonatomic) bool hasTrailingEntityType;
@property (nonatomic, retain) NSMutableArray *lines;
@property (nonatomic) int platformType;
@property (nonatomic) int trailingEntityType;
@property (nonatomic, readonly) int*trailingEntityTypeOrders;
@property (nonatomic, readonly) unsigned long long trailingEntityTypeOrdersCount;

+ (bool)isValid:(id)arg1;
+ (Class)lineType;

- (void).cxx_destruct;
- (int)StringAsPlatformType:(id)arg1;
- (int)StringAsTrailingEntityType:(id)arg1;
- (int)StringAsTrailingEntityTypeOrders:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addTrailingEntityTypeOrder:(int)arg1;
- (void)clearLines;
- (void)clearTrailingEntityTypeOrders;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPlatformType;
- (bool)hasTrailingEntityType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lineAtIndex:(unsigned long long)arg1;
- (id)lines;
- (unsigned long long)linesCount;
- (void)mergeFrom:(id)arg1;
- (int)platformType;
- (id)platformTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPlatformType:(bool)arg1;
- (void)setHasTrailingEntityType:(bool)arg1;
- (void)setLines:(id)arg1;
- (void)setPlatformType:(int)arg1;
- (void)setTrailingEntityType:(int)arg1;
- (void)setTrailingEntityTypeOrders:(int*)arg1 count:(unsigned long long)arg2;
- (int)trailingEntityType;
- (id)trailingEntityTypeAsString:(int)arg1;
- (int)trailingEntityTypeOrderAtIndex:(unsigned long long)arg1;
- (int*)trailingEntityTypeOrders;
- (id)trailingEntityTypeOrdersAsString:(int)arg1;
- (unsigned long long)trailingEntityTypeOrdersCount;
- (void)writeTo:(id)arg1;

@end
