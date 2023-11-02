
@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying> {
    unsigned int  _blurredHourOfDay;
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int has_blurredHourOfDay : 1; 
        unsigned int has_dayOfWeek : 1; 
        unsigned int has_maxCategories : 1; 
        unsigned int has_maxResultsPerCategory : 1; 
    }  _flags;
    unsigned int  _maxCategories;
    unsigned int  _maxResultsPerCategory;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
