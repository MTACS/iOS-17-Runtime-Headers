
@interface GEOPDSearchParameters : PBCodable <NSCopying> {
    unsigned int  _auxiliaryTierNumResults;
    NSString * _enrichmentCampaignNamespace;
    GEOPDETAFilter * _etaFilter;
    GEOPDSSearchEvChargingParameters * _evChargingParameters;
    struct { 
        unsigned int has_auxiliaryTierNumResults : 1; 
        unsigned int has_maxResults : 1; 
        unsigned int has_placeSummaryRevision : 1; 
        unsigned int has_searchType : 1; 
        unsigned int has_sortDirection : 1; 
        unsigned int has_sortOrder : 1; 
        unsigned int has_supportDirectionIntentSearch : 1; 
        unsigned int has_supportDymSuggestion : 1; 
        unsigned int has_supportSearchEnrichment : 1; 
        unsigned int has_supportSearchResultSection : 1; 
        unsigned int has_supportStructuredRapAffordance : 1; 
        unsigned int has_supportUnresolvedDirectionIntent : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_knownRefinementTypes : 1; 
        unsigned int read_supportedPlaceSummaryFormatTypes : 1; 
        unsigned int read_supportedRelatedEntitySectionTypes : 1; 
        unsigned int read_supportedSearchSectionTypes : 1; 
        unsigned int read_supportedSearchTierTypes : 1; 
        unsigned int read_enrichmentCampaignNamespace : 1; 
        unsigned int read_etaFilter : 1; 
        unsigned int read_evChargingParameters : 1; 
        unsigned int read_inferredSignals : 1; 
        unsigned int read_previousSearchViewport : 1; 
        unsigned int read_recentRouteInfo : 1; 
        unsigned int read_resultRefinementQuery : 1; 
        unsigned int read_retainedSearch : 1; 
        unsigned int read_searchEnrichmentRevisionMetadatas : 1; 
        unsigned int read_searchFilter : 1; 
        unsigned int read_searchLocationParameters : 1; 
        unsigned int read_searchOriginationInfo : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_searchStructureIntentType : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_suggestionEntry : 1; 
        unsigned int read_suggestionMetadata : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDSInferredSignals * _inferredSignals;
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
    GEOPDRetainedSearchMetadata * _retainedSearch;
    NSMutableArray * _searchEnrichmentRevisionMetadatas;
    GEOPDSSearchFilter * _searchFilter;
    GEOPDSSearchLocationParameters * _searchLocationParameters;
    GEOPDSearchOriginationInfo * _searchOriginationInfo;
    NSString * _searchString;
    GEOPDSSearchStructureIntentRequestType * _searchStructureIntentType;
    int  _searchType;
    int  _sortDirection;
    int  _sortOrder;
    GEOPDAutocompleteEntry * _suggestionEntry;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    bool  _supportDirectionIntentSearch;
    bool  _supportDymSuggestion;
    bool  _supportSearchEnrichment;
    bool  _supportSearchResultSection;
    bool  _supportStructuredRapAffordance;
    bool  _supportUnresolvedDirectionIntent;
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
- (void)addPlaceSummaryRevision:(id)arg1;
- (void)addSearchImplicitInfo:(id)arg1 idenitfier:(id)arg2 categoryID:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithGeoMapItemIdentifier:(id)arg1 categoryID:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7 routeInfo:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
