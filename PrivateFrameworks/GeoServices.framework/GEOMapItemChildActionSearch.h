
@interface GEOMapItemChildActionSearch : NSObject {
    GEORelatedSearchSuggestion * _relatedSearchSuggestion;
}

@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, retain) GEORelatedSearchSuggestion *relatedSearchSuggestion;

- (void).cxx_destruct;
- (id)displayString;
- (id)initWithChildActionSearch:(id)arg1;
- (id)relatedSearchSuggestion;
- (void)setRelatedSearchSuggestion:(id)arg1;

@end
