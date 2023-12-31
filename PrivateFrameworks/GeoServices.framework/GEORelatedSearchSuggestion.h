
@interface GEORelatedSearchSuggestion : NSObject {
    GEOPDRelatedSearchSuggestion * _relatedSearchSuggestion;
}

@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, retain) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
@property (nonatomic, readonly) NSString *searchBarDisplayToken;

- (void).cxx_destruct;
- (id)_suggestionEntryMetadata;
- (id)displayString;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;
- (id)relatedSearchSuggestion;
- (id)searchBarDisplayToken;
- (void)setRelatedSearchSuggestion:(id)arg1;

@end
