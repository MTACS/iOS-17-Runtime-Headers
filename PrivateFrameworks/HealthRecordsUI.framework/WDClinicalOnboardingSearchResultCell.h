
@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell {
    HKClinicalProviderSearchResult * _searchResult;
    NSArray * _searchTerms;
}

@property (nonatomic, copy) HKClinicalProviderSearchResult *searchResult;
@property (nonatomic, copy) NSArray *searchTerms;

- (void).cxx_destruct;
- (void)_setAccessibilityIdentifier;
- (void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateLabelVisibility;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)searchResult;
- (id)searchTerms;
- (void)setSearchResult:(id)arg1;
- (void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;
- (void)setSearchTerms:(id)arg1;

@end
