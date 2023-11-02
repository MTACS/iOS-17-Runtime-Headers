
@interface GEOPDSearchResult : PBCodable <NSCopying> {
    GEOPDSSearchAutoRedoThreshold * _autoRedoSearchThreshold;
    GEOPDResolvedItem * _clientResolvedResult;
    GEOPDRelatedSearchSuggestion * _defaultRelatedSearchSuggestion;
    GEOPDDirectionIntent * _directionIntent;
    bool  _disableAddingAdditionalPaddingOnViewport;
    NSMutableArray * _disambiguationLabels;
    NSMutableArray * _displayHeaderSubstitutes;
    GEOMapRegion * _displayMapRegion;
    unsigned int  _dymSuggestionVisibleTime;
    bool  _enablePartialClientization;
    bool  _enableStructuredRapAffordance;
    struct { 
        unsigned int has_dymSuggestionVisibleTime : 1; 
        unsigned int has_retainSearchTime : 1; 
        unsigned int has_searchResultType : 1; 
        unsigned int has_searchResultViewType : 1; 
        unsigned int has_disableAddingAdditionalPaddingOnViewport : 1; 
        unsigned int has_enablePartialClientization : 1; 
        unsigned int has_enableStructuredRapAffordance : 1; 
        unsigned int has_isChainResultSet : 1; 
        unsigned int has_showDymSuggestionCloseButton : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_autoRedoSearchThreshold : 1; 
        unsigned int read_clientResolvedResult : 1; 
        unsigned int read_defaultRelatedSearchSuggestion : 1; 
        unsigned int read_directionIntent : 1; 
        unsigned int read_disambiguationLabels : 1; 
        unsigned int read_displayHeaderSubstitutes : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_placeSummaryLayoutMetadata : 1; 
        unsigned int read_relatedEntitySections : 1; 
        unsigned int read_relatedSearchSuggestions : 1; 
        unsigned int read_resultDetourInfos : 1; 
        unsigned int read_resultDisplayHeader : 1; 
        unsigned int read_resultRefinementGroup : 1; 
        unsigned int read_retainSearchs : 1; 
        unsigned int read_searchClientBehavior : 1; 
        unsigned int read_searchResultSections : 1; 
        unsigned int read_searchTierMetadatas : 1; 
        unsigned int read_sectionList : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isChainResultSet;
    GEOPDPlaceSummaryLayoutMetadata * _placeSummaryLayoutMetadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _relatedEntitySections;
    NSMutableArray * _relatedSearchSuggestions;
    NSMutableArray * _resultDetourInfos;
    NSString * _resultDisplayHeader;
    GEOPDResultRefinementGroup * _resultRefinementGroup;
    unsigned int  _retainSearchTime;
    NSMutableArray * _retainSearchs;
    GEOPDSearchClientBehavior * _searchClientBehavior;
    NSMutableArray * _searchResultSections;
    int  _searchResultType;
    int  _searchResultViewType;
    NSMutableArray * _searchTierMetadatas;
    GEOPDSearchSectionList * _sectionList;
    bool  _showDymSuggestionCloseButton;
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
