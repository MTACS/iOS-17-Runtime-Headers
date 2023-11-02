
@interface AppStoreKitInternal.SearchAction : AppStoreKitInternal.Action {
    void entity;
    void excludedTerms;
    void guidedSearchOptimizationTerm;
    void guidedSearchTokens;
    void origin;
    void originatingTerm;
    void spellCheckEnabled;
    void term;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@end
