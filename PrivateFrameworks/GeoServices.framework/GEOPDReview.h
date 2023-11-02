
@interface GEOPDReview : PBCodable <NSCopying> {
    struct { 
        unsigned int has_reviewTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_rating : 1; 
        unsigned int read_reviewId : 1; 
        unsigned int read_reviewer : 1; 
        unsigned int read_snippets : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDRating * _rating;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _reviewId;
    double  _reviewTime;
    GEOPDUser * _reviewer;
    NSMutableArray * _snippets;
    PBUnknownFields * _unknownFields;
}

+ (id)reviewsForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)_bestSnippet;
- (id)_bestSnippetLocale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
