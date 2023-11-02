
@interface GEORPRatingValue : PBCodable <NSCopying> {
    GEOLocalizedString * _categoryName;
    struct { 
        unsigned int has_score : 1; 
    }  _flags;
    int  _score;
}

@property (nonatomic, retain) GEOLocalizedString *categoryName;
@property (nonatomic, readonly) bool hasCategoryName;
@property (nonatomic) bool hasScore;
@property (nonatomic) int score;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)categoryName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryName;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)score;
- (void)setCategoryName:(id)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(int)arg1;
- (void)writeTo:(id)arg1;

@end
