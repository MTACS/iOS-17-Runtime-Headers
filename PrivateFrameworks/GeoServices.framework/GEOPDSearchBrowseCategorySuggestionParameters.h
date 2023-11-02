
@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _engineTypes;
    GEOPDSSearchEvChargingParameters * _evChargingParameters;
    struct { 
        unsigned int has_requestLocalTimestamp : 1; 
        unsigned int has_minimumNumberOfCategories : 1; 
        unsigned int has_preferredTransportType : 1; 
        unsigned int has_suggestionType : 1; 
        unsigned int has_isCarplayRequest : 1; 
        unsigned int has_isFlatCategoryListRequest : 1; 
        unsigned int has_isFromNoQueryState : 1; 
        unsigned int has_isWidgetRequest : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_engineTypes : 1; 
        unsigned int read_evChargingParameters : 1; 
        unsigned int read_searchOriginationInfo : 1; 
        unsigned int read_venueFilter : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isCarplayRequest;
    bool  _isFlatCategoryListRequest;
    bool  _isFromNoQueryState;
    bool  _isWidgetRequest;
    int  _minimumNumberOfCategories;
    int  _preferredTransportType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _requestLocalTimestamp;
    GEOPDSearchOriginationInfo * _searchOriginationInfo;
    int  _suggestionType;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueFilter;
    GEOPDViewportInfo * _viewportInfo;
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
