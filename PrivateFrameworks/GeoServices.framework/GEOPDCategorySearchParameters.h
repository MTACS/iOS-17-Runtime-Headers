
@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {
    unsigned int  _auxiliaryTierNumResults;
    unsigned int  _blurredHourOfDay;
    unsigned int  _dayOfWeek;
    NSString * _enrichmentCampaignNamespace;
    GEOPDETAFilter * _etaFilter;
    GEOPDSSearchEvChargingParameters * _evChargingParameters;
    struct { 
        unsigned int has_auxiliaryTierNumResults : 1; 
        unsigned int has_blurredHourOfDay : 1; 
        unsigned int has_dayOfWeek : 1; 
        unsigned int has_maxResults : 1; 
        unsigned int has_placeSummaryRevision : 1; 
        unsigned int has_searchType : 1; 
        unsigned int has_supportCategorySearchResultSection : 1; 
        unsigned int has_supportSearchEnrichment : 1; 
        unsigned int has_supportStructuredRapAffordance : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_knownRefinementTypes : 1; 
        unsigned int read_supportedPlaceSummaryFormatTypes : 1; 
        unsigned int read_supportedRelatedEntitySectionTypes : 1; 
        unsigned int read_supportedSearchSectionTypes : 1; 
        unsigned int read_supportedSearchTierTypes : 1; 
        unsigned int read_enrichmentCampaignNamespace : 1; 
        unsigned int read_etaFilter : 1; 
        unsigned int read_evChargingParameters : 1; 
        unsigned int read_previousSearchViewport : 1; 
        unsigned int read_recentRouteInfo : 1; 
        unsigned int read_resultRefinementQuery : 1; 
        unsigned int read_searchEnrichmentRevisionMetadatas : 1; 
        unsigned int read_searchOriginationInfo : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownRefinementTypes;
    unsigned int  _maxResults;
    int  _placeSummaryRevision;
    GEOPDViewportInfo * _previousSearchViewport;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRecentRouteInfo * _recentRouteInfo;
    GEOPDResultRefinementQuery * _resultRefinementQuery;
    NSMutableArray * _searchEnrichmentRevisionMetadatas;
    GEOPDSearchOriginationInfo * _searchOriginationInfo;
    int  _searchType;
    NSData * _suggestionEntryMetadata;
    bool  _supportCategorySearchResultSection;
    bool  _supportSearchEnrichment;
    bool  _supportStructuredRapAffordance;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedPlaceSummaryFormatTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedRelatedEntitySectionTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedSearchSectionTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedSearchTierTypes;
    PBUnknownFields * _unknownFields;
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
