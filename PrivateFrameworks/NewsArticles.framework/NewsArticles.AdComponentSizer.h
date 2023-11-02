
@interface NewsArticles.AdComponentSizer : SXComponentSizer {
    void $__lazy_storage_$_isVisualDebuggingEnabled;
    void bannerAdFactory;
    void bannerAdLayoutAttributesFactory;
    void layoutStore;
}

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inColumnLayout:(id)arg2;
- (bool)requiresSizeChangeForStateChange:(id)arg1 fromState:(id)arg2;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1;

@end
