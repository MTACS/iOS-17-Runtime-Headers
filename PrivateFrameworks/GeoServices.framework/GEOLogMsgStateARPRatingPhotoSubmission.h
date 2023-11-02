
@interface GEOLogMsgStateARPRatingPhotoSubmission : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isFromMapsSuggesions : 1; 
        unsigned int has_isFromRecommendationCard : 1; 
        unsigned int has_isPlacecardInlineSubmission : 1; 
    }  _flags;
    bool  _isFromMapsSuggesions;
    bool  _isFromRecommendationCard;
    bool  _isPlacecardInlineSubmission;
    NSString * _originTarget;
}

@property (nonatomic) bool hasIsFromMapsSuggesions;
@property (nonatomic) bool hasIsFromRecommendationCard;
@property (nonatomic) bool hasIsPlacecardInlineSubmission;
@property (nonatomic, readonly) bool hasOriginTarget;
@property (nonatomic) bool isFromMapsSuggesions;
@property (nonatomic) bool isFromRecommendationCard;
@property (nonatomic) bool isPlacecardInlineSubmission;
@property (nonatomic, retain) NSString *originTarget;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsFromMapsSuggesions;
- (bool)hasIsFromRecommendationCard;
- (bool)hasIsPlacecardInlineSubmission;
- (bool)hasOriginTarget;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromMapsSuggesions;
- (bool)isFromRecommendationCard;
- (bool)isPlacecardInlineSubmission;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originTarget;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsFromMapsSuggesions:(bool)arg1;
- (void)setHasIsFromRecommendationCard:(bool)arg1;
- (void)setHasIsPlacecardInlineSubmission:(bool)arg1;
- (void)setIsFromMapsSuggesions:(bool)arg1;
- (void)setIsFromRecommendationCard:(bool)arg1;
- (void)setIsPlacecardInlineSubmission:(bool)arg1;
- (void)setOriginTarget:(id)arg1;
- (void)writeTo:(id)arg1;

@end
