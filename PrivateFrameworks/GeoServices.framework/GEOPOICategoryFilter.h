
@interface GEOPOICategoryFilter : NSObject <GEOAutocompleteFilter, GEOSearchFilter> {
    NSArray * _categoriesToExclude;
    NSArray * _categoriesToInclude;
}

@property (nonatomic, readonly) NSArray *categoriesToExclude;
@property (nonatomic, readonly) NSArray *categoriesToInclude;

+ (id)filterExcludingAllCategories;
+ (id)filterIncludingAllCategories;

- (void).cxx_destruct;
- (void)applyFilterToPlaceParameters:(id)arg1;
- (bool)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2;
- (bool)applyToSearchParameters:(id)arg1 error:(id*)arg2;
- (id)categoriesToExclude;
- (id)categoriesToInclude;
- (id)initWithCategoriesToInclude:(id)arg1 categoriesToExclude:(id)arg2;
- (bool)shouldDisplayPOIWithType:(int)arg1;

@end
