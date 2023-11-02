
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo : PBCodable <NSCopying> {
    int  _contentRating;
    struct { 
        unsigned int contentRating : 1; 
        unsigned int relevanceRating : 1; 
    }  _has;
    int  _relevanceRating;
}

@property (nonatomic) int contentRating;
@property (nonatomic) bool hasContentRating;
@property (nonatomic) bool hasRelevanceRating;
@property (nonatomic) int relevanceRating;

- (int)StringAsContentRating:(id)arg1;
- (int)StringAsRelevanceRating:(id)arg1;
- (int)contentRating;
- (id)contentRatingAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentRating;
- (bool)hasRelevanceRating;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relevanceRating;
- (id)relevanceRatingAsString:(int)arg1;
- (void)setContentRating:(int)arg1;
- (void)setHasContentRating:(bool)arg1;
- (void)setHasRelevanceRating:(bool)arg1;
- (void)setRelevanceRating:(int)arg1;
- (void)writeTo:(id)arg1;

@end
