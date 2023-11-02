
@interface GEOPDReviewFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int has_suppressSyntheticReviews : 1; 
    }  _flags;
    struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _photoSizeFilters;
    unsigned long long  _photoSizeFiltersCount;
    unsigned long long  _photoSizeFiltersSpace;
    bool  _suppressSyntheticReviews;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
