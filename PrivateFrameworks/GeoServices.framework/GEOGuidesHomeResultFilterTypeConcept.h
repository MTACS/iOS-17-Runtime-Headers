
@interface GEOGuidesHomeResultFilterTypeConcept : NSObject {
    GEOPDGuidesHomeResultFilterTypeConcept * _conceptFilter;
}

@property (nonatomic, readonly) GEOPDGuidesHomeResultFilterTypeConcept *conceptFilter;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *searchSuggestion;

- (void).cxx_destruct;
- (id)conceptFilter;
- (id)initWithGuidesHomeResultFilterTypeConcept:(id)arg1;
- (id)searchSuggestion;

@end
