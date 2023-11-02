
@interface NewsUI2.MastheadViewProvider : NSObject <FCBundleSubscriptionChangeObserver> {
    void animationManager;
    void bundleSubscriptionManager;
    void engagementBanner;
    void eventManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastLayoutOptions;
    void layoutAttributesFactory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  margins;
    void mastheadView;
    void model;
    void titleViewStyler;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
