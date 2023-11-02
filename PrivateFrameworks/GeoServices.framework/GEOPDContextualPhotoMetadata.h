
@interface GEOPDContextualPhotoMetadata : PBCodable <NSCopying> {
    NSMutableArray * _contextualPhotoLabels;
    struct { 
        unsigned int has_maxNumContextualPhotos : 1; 
        unsigned int has_maxNumPhotos : 1; 
        unsigned int has_shouldApplyContextualizationPlacecard : 1; 
        unsigned int has_shouldApplyContextualizationSearch : 1; 
        unsigned int has_shouldLimitToPoisWithVendorTopPhoto : 1; 
    }  _flags;
    unsigned int  _maxNumContextualPhotos;
    unsigned int  _maxNumPhotos;
    bool  _shouldApplyContextualizationPlacecard;
    bool  _shouldApplyContextualizationSearch;
    bool  _shouldLimitToPoisWithVendorTopPhoto;
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
