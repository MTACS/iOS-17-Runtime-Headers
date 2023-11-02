
@interface GEOPublisherViewResultFilterKeyword : NSObject {
    GEOPDPublisherViewResultFilterKeyword * _filterKeywordIdentifier;
}

@property (nonatomic, readonly) GEOPDPublisherViewResultFilterKeyword *keywordIdentifier;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *searchSuggestion;

- (void).cxx_destruct;
- (id)initWithFilterKeywordIdentifier:(id)arg1;
- (id)keywordIdentifier;
- (id)searchSuggestion;

@end
