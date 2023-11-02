
@interface PXSuggestionsDataSource : PXSectionedDataSource {
    <PXDisplaySuggestionFetchResult> * _suggestions;
}

@property (nonatomic, readonly) <PXDisplaySuggestionFetchResult> *suggestions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSuggestionsFetchResult:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)suggestions;

@end
