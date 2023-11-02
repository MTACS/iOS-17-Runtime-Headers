
@interface PromotedContentUI.AppAdView : APPCPromotedContentView <ASCAdLockupViewDelegate> {
    void $__lazy_storage_$_appView;
    void $__lazy_storage_$_bottomBorder;
    void $__lazy_storage_$_topBorder;
}

- (void).cxx_destruct;
- (void)adLockupView:(id)arg1 didFailRequestWithError:(id)arg2;
- (void)adLockupView:(id)arg1 didSelectOfferWithState:(id)arg2;
- (void)adLockupView:(id)arg1 preprocessOffer:(id)arg2 inState:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)adLockupViewDidCancelScreenshotsFetchRequest:(id)arg1;
- (void)adLockupViewDidFinishRequest:(id)arg1;
- (void)adLockupViewDidFinishScreenshotsFetchRequest:(id)arg1;
- (void)adLockupViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (void)adLockupViewDidSelectAdMarker:(id)arg1;
- (id)metricsActivityForAdLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2 inState:(id)arg3;
- (id)metricsActivityForPresentingProductDetailsOfAdLockupView:(id)arg1 inState:(id)arg2;
- (id)presentingViewControllerForAdLockupView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
