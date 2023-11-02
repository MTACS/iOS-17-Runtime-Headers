
@interface NewsSubscription.BundleHardPaywallViewProvider : NSObject <UIScrollViewDelegate, UITextViewDelegate> {
    void badgeImages;
    void bundleHardPaywallView;
    void dataProvider;
    void delegate;
    void images;
    void layoutAttributesFactory;
    void renderer;
    void styler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoFileURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
