
@interface GEORating : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxScore : 1; 
        unsigned int has_score : 1; 
        unsigned int has_numberOfRatings : 1; 
        unsigned int has_numberOfReviews : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_uRL : 1; 
        unsigned int read_provider : 1; 
        unsigned int read_ratingCategoryId : 1; 
        unsigned int read_reviews : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _maxScore;
    int  _numberOfRatings;
    int  _numberOfReviews;
    NSString * _provider;
    NSString * _ratingCategoryId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _reviews;
    double  _score;
    NSString * _uRL;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)arg1 normalizedUserRatingScore:(float)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
