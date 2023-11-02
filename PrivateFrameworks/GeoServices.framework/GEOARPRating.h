
@interface GEOARPRating : PBCodable <NSCopying> {
    NSString * _displayedText;
    struct { 
        unsigned int has_rating : 1; 
    }  _flags;
    bool  _rating;
}

@property (nonatomic, retain) NSString *displayedText;
@property (nonatomic, readonly) bool hasDisplayedText;
@property (nonatomic) bool hasRating;
@property (nonatomic) bool rating;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedText;
- (bool)hasDisplayedText;
- (bool)hasRating;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)rating;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayedText:(id)arg1;
- (void)setHasRating:(bool)arg1;
- (void)setRating:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
