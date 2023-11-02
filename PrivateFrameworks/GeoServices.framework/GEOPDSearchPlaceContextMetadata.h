
@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying> {
    NSMutableArray * _alternateSearchableNames;
    GEOPDContextualPhotoMetadata * _contextualPhotoMetadata;
    struct { 
        unsigned int has_taxonomyTypeForClientization : 1; 
        unsigned int has_isDefaultName : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_alternateSearchableNames : 1; 
        unsigned int read_contextualPhotoMetadata : 1; 
        unsigned int read_interpretedCategory : 1; 
        unsigned int read_matchedDisplayNameLanguageCode : 1; 
        unsigned int read_matchedDisplayName : 1; 
        unsigned int read_nearbyPlacesMetadata : 1; 
        unsigned int read_normalizedQuery : 1; 
        unsigned int read_secondaryNameOverrideLanguage : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _interpretedCategory;
    bool  _isDefaultName;
    NSString * _matchedDisplayName;
    NSString * _matchedDisplayNameLanguageCode;
    GEOPDNearbyPlacesMetadata * _nearbyPlacesMetadata;
    NSString * _normalizedQuery;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _secondaryNameOverrideLanguage;
    int  _taxonomyTypeForClientization;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
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
