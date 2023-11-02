
@interface GEOPDCategorizedPhotosFilter : PBCodable <NSCopying> {
    NSString * _categoryId;
    int  _count;
    bool  _coverPhotoFirst;
    struct { 
        unsigned int has_count : 1; 
        unsigned int has_startIndex : 1; 
        unsigned int has_coverPhotoFirst : 1; 
        unsigned int has_includeCoverPhoto : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_photoSizeFilters : 1; 
        unsigned int read_categoryId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeCoverPhoto;
    struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _photoSizeFilters;
    unsigned long long  _photoSizeFiltersCount;
    unsigned long long  _photoSizeFiltersSpace;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _startIndex;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
