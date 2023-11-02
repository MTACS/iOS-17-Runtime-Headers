
@interface GEOPDRating : PBCodable <NSCopying> {
    NSMutableArray * _appleRatingCategorys;
    struct { 
        unsigned int has_maxScore : 1; 
        unsigned int has_score : 1; 
        unsigned int has_numRatingsUsedForScore : 1; 
        unsigned int has_ratingType : 1; 
    }  _flags;
    double  _maxScore;
    int  _numRatingsUsedForScore;
    int  _ratingType;
    double  _score;
    PBUnknownFields * _unknownFields;
}

+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;
+ (id)ratingListForPlaceData:(id)arg1 type:(int)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
