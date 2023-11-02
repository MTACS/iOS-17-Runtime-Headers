
@interface AppStoreKitInternal.SearchResultsPage : AppStoreKitInternal.BasePage {
    void facets;
    void guidedSearchQueries;
    void guidedSearchTokens;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  guidedSearchTokensParentImpressionMetrics;
    void isAutoPlayEnabled;
    void isCondensedSearchLockupsEnabled;
    void isIncomplete;
    void message;
    void nextPage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  resultsParentImpressionMetrics;
    void searchCancelAction;
    void searchClearAction;
    void selectedFacetOptions;
    void shelfMapping;
    void shelfOrdering;
    void transparencyLink;
}

@end
