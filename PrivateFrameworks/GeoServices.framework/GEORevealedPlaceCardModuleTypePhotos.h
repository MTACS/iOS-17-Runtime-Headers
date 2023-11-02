
@interface GEORevealedPlaceCardModuleTypePhotos : PBCodable <NSCopying> {
    bool  _categoryAlbumExists;
    struct { 
        unsigned int has_categoryAlbumExists : 1; 
    }  _flags;
}

@property (nonatomic) bool categoryAlbumExists;
@property (nonatomic) bool hasCategoryAlbumExists;

+ (bool)isValid:(id)arg1;

- (bool)categoryAlbumExists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryAlbumExists;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryAlbumExists:(bool)arg1;
- (void)setHasCategoryAlbumExists:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
