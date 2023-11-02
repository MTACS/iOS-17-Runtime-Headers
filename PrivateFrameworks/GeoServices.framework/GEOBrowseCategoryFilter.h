
@interface GEOBrowseCategoryFilter : NSObject <GEOAutocompleteFilter, GEOSearchFilter> {
    GEOSearchCategory * _category;
}

- (void).cxx_destruct;
- (bool)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2;
- (bool)applyToSearchParameters:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithCategory:(id)arg1;

@end
