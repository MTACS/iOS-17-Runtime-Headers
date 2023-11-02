
@interface DOCSearchingDocumentSource : DOCDocumentSource {
    FPProviderDomain * _providerDomain;
}

- (void).cxx_destruct;
- (id)initWithProviderDomain:(id)arg1;
- (id)loadIconForSize:(long long)arg1;
- (id)supportedSearchFilters;

@end
