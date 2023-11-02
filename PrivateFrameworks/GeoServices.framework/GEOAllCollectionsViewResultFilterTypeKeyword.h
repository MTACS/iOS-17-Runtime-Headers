
@interface GEOAllCollectionsViewResultFilterTypeKeyword : NSObject {
    GEOPDAllCollectionsViewResultFilterTypeKeyword * _filterKeywordIdentifier;
}

@property (nonatomic, readonly) GEOPDAllCollectionsViewResultFilterTypeKeyword *keywordIdentifier;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *searchSuggestion;

- (void).cxx_destruct;
- (id)initWithFilterKeywordIdentifier:(id)arg1;
- (id)keywordIdentifier;
- (id)searchSuggestion;

@end
