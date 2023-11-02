
@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int has_imageDisplayed : 1; 
    }  _flags;
    bool  _imageDisplayed;
    NSMutableArray * _imageIDs;
}

@property (nonatomic) bool hasImageDisplayed;
@property (nonatomic) bool imageDisplayed;
@property (nonatomic, retain) NSMutableArray *imageIDs;

+ (Class)imageIDType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImageID:(id)arg1;
- (void)clearImageIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImageDisplayed;
- (unsigned long long)hash;
- (bool)imageDisplayed;
- (id)imageIDAtIndex:(unsigned long long)arg1;
- (id)imageIDs;
- (unsigned long long)imageIDsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasImageDisplayed:(bool)arg1;
- (void)setImageDisplayed:(bool)arg1;
- (void)setImageIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
