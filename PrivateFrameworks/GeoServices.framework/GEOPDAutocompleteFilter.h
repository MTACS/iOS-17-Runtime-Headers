
@interface GEOPDAutocompleteFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_placeTypeFilters : 1; 
        unsigned int read_requestedEntryTypes : 1; 
        unsigned int read_poiIconCategoryFilter : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _placeTypeFilters;
    GEOPDPoiIconCategoryFilter * _poiIconCategoryFilter;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _requestedEntryTypes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPoiIconCategoryFilter;
@property (nonatomic, readonly) int*placeTypeFilters;
@property (nonatomic, readonly) unsigned long long placeTypeFiltersCount;
@property (nonatomic, retain) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property (nonatomic, readonly) int*requestedEntryTypes;
@property (nonatomic, readonly) unsigned long long requestedEntryTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPlaceTypeFilters:(id)arg1;
- (int)StringAsRequestedEntryTypes:(id)arg1;
- (void)addPlaceTypeFilter:(int)arg1;
- (void)addRequestedEntryType:(int)arg1;
- (void)clearPlaceTypeFilters;
- (void)clearRequestedEntryTypes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPoiIconCategoryFilter;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)placeTypeFilterAtIndex:(unsigned long long)arg1;
- (int*)placeTypeFilters;
- (id)placeTypeFiltersAsString:(int)arg1;
- (unsigned long long)placeTypeFiltersCount;
- (id)poiIconCategoryFilter;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestedEntryTypeAtIndex:(unsigned long long)arg1;
- (int*)requestedEntryTypes;
- (id)requestedEntryTypesAsString:(int)arg1;
- (unsigned long long)requestedEntryTypesCount;
- (void)setPlaceTypeFilters:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPoiIconCategoryFilter:(id)arg1;
- (void)setRequestedEntryTypes:(int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
