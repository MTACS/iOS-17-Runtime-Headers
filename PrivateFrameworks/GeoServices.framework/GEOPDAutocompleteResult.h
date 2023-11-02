
@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {
    GEOPDAutocompleteSessionData * _autocompleteSessionData;
    NSMutableArray * _clientRankingFeatureMetadatas;
    int  _clientResolvedTypeSetupPrompt;
    bool  _enableRap;
    bool  _enableStructuredRapAffordance;
    struct { 
        unsigned int has_clientResolvedTypeSetupPrompt : 1; 
        unsigned int has_highlightType : 1; 
        unsigned int has_retainSearchTime : 1; 
        unsigned int has_enableRap : 1; 
        unsigned int has_enableStructuredRapAffordance : 1; 
        unsigned int has_isNoResultFromNegativeCache : 1; 
        unsigned int has_isTopSectionTypeQuery : 1; 
        unsigned int has_shouldDifferentiateClientAndServerResults : 1; 
        unsigned int has_shouldDisplayNoResults : 1; 
        unsigned int has_shouldEnableGrayscaleHighlighting : 1; 
        unsigned int has_shouldUseDistanceFeatureServerResults : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_autocompleteSessionData : 1; 
        unsigned int read_clientRankingFeatureMetadatas : 1; 
        unsigned int read_parsecQueryRankingFeatures : 1; 
        unsigned int read_placeSummaryLayoutMetadata : 1; 
        unsigned int read_sections : 1; 
        unsigned int read_sortPriorityMappings : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _highlightType;
    bool  _isNoResultFromNegativeCache;
    bool  _isTopSectionTypeQuery;
    GEOPDParsecQueryRankingFeatures * _parsecQueryRankingFeatures;
    GEOPDPlaceSummaryLayoutMetadata * _placeSummaryLayoutMetadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _retainSearchTime;
    NSMutableArray * _sections;
    bool  _shouldDifferentiateClientAndServerResults;
    bool  _shouldDisplayNoResults;
    bool  _shouldEnableGrayscaleHighlighting;
    bool  _shouldUseDistanceFeatureServerResults;
    NSMutableArray * _sortPriorityMappings;
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
