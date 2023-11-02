
@interface AssetViewer.CheckoutPlatter : _TtCs12_SwiftObject {
    void $__lazy_storage_$_backgroundView;
    void $__lazy_storage_$_checkoutContainer;
    void $__lazy_storage_$_customButtonFull;
    void allowsContentVisibility;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  analytics;
    void bottomBackgroundViewConstraint;
    void bottomCheckoutContainerConstraint;
    void centerYCheckoutContainerConstraint;
    void customHTMLLoadedBlock;
    void delegate;
    void hasCustomContentFinishedLoaded;
    void hasPerformedSlideUpIntroAnimation;
    void heightBackgroundViewConstraint;
    void leftBackgroundViewConstraint;
    void rightBackgroundViewConstraint;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  style;
    void topCheckoutContainerConstraint;
    void traitManager;
    void widthBackgroundViewConstraint;
}

- (void)applePayButtonPressed;
- (void)contentSizeCategoryDidChange;

@end
