
@interface NewsArticles.AdComponentView : SXComponentView {
    void $__lazy_storage_$_debugView;
    void bannerAdFactory;
    void bannerAdRenderer;
    void bannerView;
    void exposureMonitor;
    void integrator;
    void journal;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  layoutAttributes;
    void requestManager;
    void tracker;
    void viewManager;
}

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)renderContents;
- (void)visibilityStateDidChangeFromState:(long long)arg1;

@end
