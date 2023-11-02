
@interface NewsSubscription.BundleSoftPaywallViewProvider : NSObject <UITextViewDelegate> {
    void badgeImages;
    void bundleSoftPaywallView;
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
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
