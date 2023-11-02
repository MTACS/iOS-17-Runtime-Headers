
@interface AppStoreKitInternal.SearchResults : AppStoreKitInternal.BasePage {
    void facets;
    void guidedSearchQueries;
    void guidedSearchTokens;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  guidedSearchTokensParentImpressionMetrics;
    void isAutoPlayEnabled;
    void isCondensedSearchLockupsEnabled;
    void message;
    void nextPage;
    void results;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  resultsParentImpressionMetrics;
    void selectedFacetOptions;
    void transparencyLink;
}

@end
