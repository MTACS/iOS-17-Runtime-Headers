
@interface GEOImageServiceResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int has_height : 1; 
        unsigned int has_status : 1; 
        unsigned int has_width : 1; 
    }  _flags;
    unsigned int  _height;
    NSMutableArray * _images;
    int  _status;
    unsigned int  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasWidth;
@property (nonatomic) unsigned int height;
@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic) int status;
@property (nonatomic) unsigned int width;

+ (Class)imagesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addImages:(id)arg1;
- (void)clearImages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasStatus;
- (bool)hasWidth;
- (unsigned long long)hash;
- (unsigned int)height;
- (id)images;
- (id)imagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagesCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setImages:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
