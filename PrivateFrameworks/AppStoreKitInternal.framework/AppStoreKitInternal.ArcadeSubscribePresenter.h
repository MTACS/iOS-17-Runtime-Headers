
@interface AppStoreKitInternal.ArcadeSubscribePresenter : AppStoreKitInternal.BasePresenter {
    void model;
    void sidepack;
    void subscriptionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
    void view;
}

- (void)subscriptionBagDidChange;

@end
